#include<bits/stdc++.h>
using namespace std;
void dfs(int u,int p,int prevIdx,int cur,
         vector<vector<pair<int,int>>>& adj,
         int& ans){
    ans=max(ans,cur);
    for(auto it:adj[u]){
        int v=it.first;
        int idx=it.second;
        if(v==p) continue;

        if(idx > prevIdx)
            dfs(v,u,idx,cur,adj,ans);
        else
            dfs(v,u,idx,cur+1,adj,ans);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n;
        vector<vector<pair<int,int>>>adj(n+1);
        for(int i=0;i<n-1;i++){
            cin>>x>>y;
            adj[x].push_back({y,i});
            adj[y].push_back({x,i});
        }
        int maxi=0;
        dfs(1,0,-1,1,adj,maxi);
        cout<<maxi<<endl;
    }
}