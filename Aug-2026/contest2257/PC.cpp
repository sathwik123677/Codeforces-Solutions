#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if(!(cin>>t)) return 0;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n+1);
        for(int i=2;i<=n;i++){
            cin>>p[i];
        }
        int m;
        cin>>m;
        vector<bool> d(n+1,false);
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            d[x]=true;
        }
        vector<vector<int>> g(n+1);
        vector<bool> s(n+1,false);
        for(int i=n;i>=1;i--){
            s[i]=d[i]||(!g[i].empty());
            if(s[i]&&i>1){
                g[p[i]].push_back(i);
            }
        }
        vector<int> r;
        for(int i=1;i<=n;i++){
            int k=g[i].size();
            if(d[i]){
                for(int c:g[i]){
                    r.push_back(c);
                }
            }else{
                if(k>=2){
                    for(int j=0;j<k-1;j++){
                        r.push_back(g[i][j]);
                    }
                }
            }
        }
        cout<<r.size();
        for(int x:r){
            cout<<" "<<x;
        }
        cout<<"\n";
    }
    return 0;
}
