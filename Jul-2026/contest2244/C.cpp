#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>p(n+1);
        for(int i=1;i<=n;i++)cin>>p[i];

        vector<vector<int>>g(n+1);
        for(int i=1;i<=n;i++){
            if(i+x<=n){
                g[i].push_back(i+x);
                g[i+x].push_back(i);
            }
            if(i+y<=n){
                g[i].push_back(i+y);
                g[i+y].push_back(i);
            }
        }

        vector<int>c(n+1,-1);
        int id=0;
        for(int i=1;i<=n;i++){
            if(c[i]!=-1)continue;
            queue<int>q;
            q.push(i);
            c[i]=id;
            while(!q.empty()){
                int u=q.front();
                q.pop();
                for(int v:g[u]){
                    if(c[v]==-1){
                        c[v]=id;
                        q.push(v);
                    }
                }
            }
            id++;
        }
        bool o=true;
        for(int i=1;i<=n;i++){
            if(c[i]!=c[p[i]]){
                o=false;
                break;
            }
        }
        cout<<(o?"YES":"NO")<<"\n";
    }
    return 0;
}