#include<bits/stdc++.h>
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
            for(auto x:locked){
                unlock(x->name,id);
            }
            lock(node->name,id);
            return true;
        }

};