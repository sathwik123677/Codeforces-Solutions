#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    struct TrieNode {
        TrieNode* child[26];
        bool isEnd;
        TrieNode() {
            for (int i = 0; i < 26; i++) {
                child[i] = NULL;
            }
            isEnd = false;
        }
    };
    class Trie {
    public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    void insert(string word){
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (node->child[index] == NULL) {
                node->child[index] = new TrieNode();
            }
            node = node->child[index];
        }
        node->isEnd = true;
    }
     bool search(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (node->child[index] == NULL) {
                return false;
            }
            node = node->child[index];
        }
        return node->isEnd;
    }
     bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            int index = c - 'a';
            if (node->child[index] == NULL) {
                return false;
            }
            node = node->child[index];
        }
        return true;
    }
    bool startwithedit(string s,int idx,TrieNode* node,int diff){
        if(!node) return false;
        if(diff>2) return false;
        if(idx==s.size()){
            return true;
        }
        for(int i=0;i<26;i++){
            if(node->child[i]){
                if(i==s[idx]-'a'){
                    if(startwithedit(s,idx+1,node->child[i],diff)) return true;
                }else{
                    if(startwithedit(s,idx+1,node->child[i],diff+1)) return true;
                }
            }
        }
        return false;

    }
     bool searchWithEdit(string word) {
        return startwithedit(word,0,root,0);
     }
};

};
