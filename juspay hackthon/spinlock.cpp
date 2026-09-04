#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <atomic>

using namespace std;

struct SpinLock {
    atomic_flag flag = ATOMIC_FLAG_INIT;
    void lock() {
        while (flag.test_and_set(memory_order_acquire));
    }
    void unlock() {
        flag.clear(memory_order_release);
    }
};

struct Node {
    string name;
    Node* parent;
    vector<Node*> children;
    int lockedBy;
    bool isLocked;
    int use;
    Node(string nm, Node* p) {
        name = nm;
        parent = p;
        isLocked = false;
        lockedBy = -1;
        use = 0;
    }
};

class Tree {
    Node* root;
    unordered_map<string, Node*> mp;
    SpinLock lock_s;

    void getLockedDescendants(Node* node, vector<Node*>& locked) {
        for (auto child : node->children) {
            if (child->isLocked) {
                locked.push_back(child);
            }
            if (child->use > 0) {
                getLockedDescendants(child, locked);
            }
        }
    }

public:
    Tree(vector<string>& nodes, int m) {
        int n = nodes.size();
        root = new Node(nodes[0], nullptr);
        mp[nodes[0]] = root;
        queue<Node*> q;
        q.push(root);
        int idx = 1;
        while (!q.empty() && idx < n) {
            auto u = q.front();
            q.pop();
            for (int i = 0; i < m && idx < n; i++) {
                Node* child = new Node(nodes[idx], u);
                u->children.push_back(child);
                mp[nodes[idx]] = child;
                q.push(child);
                idx++;
            }
        }
    }

    bool lock(string name, int id) {
        lock_s.lock();
        if (mp.find(name) == mp.end()) {
            lock_s.unlock();
            return false;
        }
        Node* node = mp[name];
        if (node->isLocked || node->use > 0) {
            lock_s.unlock();
            return false;
        }
        Node* cur = node->parent;
        while (cur) {
            if (cur->isLocked) {
                lock_s.unlock();
                return false;
            }
            cur = cur->parent;
        }
        cur = node->parent;
        while (cur) {
            cur->use += 1;
            cur = cur->parent;
        }
        node->isLocked = true;
        node->lockedBy = id;
        lock_s.unlock();
        return true;
    }

    bool unlock(string name, int id) {
        lock_s.lock();
        if (mp.find(name) == mp.end()) {
            lock_s.unlock();
            return false;
        }
        Node* node = mp[name];
        if (!node->isLocked || node->lockedBy != id) {
            lock_s.unlock();
            return false;
        }
        Node* cur = node->parent;
        while (cur) {
            cur->use -= 1;
            cur = cur->parent;
        }
        node->isLocked = false;
        node->lockedBy = -1;
        lock_s.unlock();
        return true;
    }

    bool upgrade(string name, int id) {
        lock_s.lock();
        if (mp.find(name) == mp.end()) {
            lock_s.unlock();
            return false;
        }
        Node* node = mp[name];
        if (node->isLocked || node->use == 0) {
            lock_s.unlock();
            return false;
        }
        Node* cur = node->parent;
        while (cur) {
            if (cur->isLocked) {
                lock_s.unlock();
                return false;
            }
            cur = cur->parent;
        }
        vector<Node*> locked;
        getLockedDescendants(node, locked);
        for (auto x : locked) {
            if (x->lockedBy != id) {
                lock_s.unlock();
                return false;
            }
        }
        for (auto x : locked) {
            x->isLocked = false;
            x->lockedBy = -1;
            cur = x->parent;
            while (cur) {
                cur->use -= 1;
                cur = cur->parent;
            }
        }
        cur = node->parent;
        while (cur) {
            cur->use += 1;
            cur = cur->parent;
        }
        node->isLocked = true;
        node->lockedBy = id;
        lock_s.unlock();
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, q;
    if (!(cin >> n >> m >> q)) return 0;
    vector<string> nodes(n);
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }
    Tree tree(nodes, m);
    while (q--) {
        int type, id;
        string name;
        cin >> type >> name >> id;
        bool ans = false;
        if (type == 1) {
            ans = tree.lock(name, id);
        } else if (type == 2) {
            ans = tree.unlock(name, id);
        } else if (type == 3) {
            ans = tree.upgrade(name, id);
        }
        if (ans) cout << "true\n";
        else cout << "false\n";
    }
    return 0;
}
