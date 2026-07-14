#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<int>a;

pair<int,int>dfs(int u){
    if(g[u].empty())return {a[u],a[u]};
    vector<pair<int,int>>v;
    for(int x:g[u]){
        auto t=dfs(x);
        if(t.first==-1)return {-1,-1};
        v.push_back(t);
    }
    int m=v.size();
    int c=0,p=-1;
    for(int i=0;i<m;i++){
        int j=(i+1)%m;
        if(v[i].second+1!=v[j].first){
            c++;
            p=i;
        }
    }
    if(c==1)return {v[(p+1)%m].first,v[p].second};
    return {-1,-1};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        g.assign(n+1,{});
        a.assign(n+1,0);
        for(int i=2;i<=n;i++){
            int p;
            cin>>p;
            g[p].push_back(i);
        }
        for(int i=1;i<=n;i++)cin>>a[i];
        auto ans=dfs(1);
        if(ans.first==-1)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}