#include<bits/stdc++.h>
#include <mutex>
using namespace std;
struct Node{
    string name;
    Node* parent;
    int lockedBy;
    bool isLocked;
    int use;
   // unordered_set<Node*>lockedDescendats;
   Node(string nm,Node* p){
    name=nm;
    parent=p;
    isLocked=false;
    lockedBy=-1;
    use=0;
   }
};
class Tree{
    Node* root;
    unordered_map<string,Node*>mp;
    mutex mtx;
    public:
        Tree(vector<string>&nodes,int m){
            int n=nodes.size();
            root=new Node(nodes[0],nullptr);
            mp[nodes[0]]=root;
            queue<Node*>q;
            q.push(root);
            int idx=1;
            while(!q.empty() && idx<n){
                auto u=q.front();
                q.pop();
                for(int i=0;i<m&& idx<n;i++){
                    Node* child=new Node(nodes[idx],u);
                    mp[nodes[idx]]=child;
                    q.push(child);
                    idx++;
                }
            }
        }
        bool lock(string name,int id){
            Node* node=mp[name];
            lock_guard<mutex> guard(mtx);
            if(node->isLocked)return false;
            if(node->use>0)return false;
            Node* cur=node->parent;
            while(cur){
                if(cur->isLocked)return false;
                cur=cur->parent;
            }
            cur=node->parent;
            while(cur){
                cur->use+=1;
                cur=cur->parent;

            }
            node->isLocked=true;
            node->lockedBy=id;
            return true;
        }
        bool unlock(string name,int id){
            Node* node=mp[name];
            lock_guard<mutex> guard(mtx);
            if(!node->isLocked)return false;
            if(node->lockedBy!=id)return false;
            Node* cur=node->parent;
            while(cur){
                cur->use-=1;
                cur=cur->parent;
            }
            node->isLocked=false;
            node->lockedBy=-1;
            return true;
        }
        void f(Node* node,vector<Node*>&locked){
            for(auto it:mp){
                if(it.second->parent==node) {
                  if(it.second->isLocked)  locked.push_back(it.second);
                    f(it.second,locked);
                }
            }
        }
        bool upgrade(string name,int id){
              lock_guard<mutex> guard(mtx);
            Node* node=mp[name];
            if(node->isLocked || node->use==0)return false;
            Node* cur=node->parent;
            while(cur){
                if(cur->isLocked)return false;
                cur=cur->parent;
            }
            vector<Node*>locked;
            f(node,locked);
            for(auto x:locked){
                if(x->lockedBy!=id)return false;
            }
             // Unlock descendants manually.
        // We DON'T call unlock() here because
        // unlock() would try to acquire mtx again.
            for(auto x:locked){
               x->isLocked=false;
               x->lockedBy=-1;
               Node* cur=x->parent;
                while(cur){
                     cur->use-=1;
                     cur=cur->parent;
                }

            }
           Node* cur=node->parent;
            while(cur){
                cur->use+=1;
                cur=cur->parent;

            }
            node->isLocked=true;
            node->lockedBy=id;
            return true;
        }

};