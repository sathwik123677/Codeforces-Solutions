#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n+1);
        vector<vector<int>>pos(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]<=n) pos[a[i]].push_back(i);
        }
        long long ans=0;
        for(long long x=1;x<=n;x++){
            if(pos[x].empty()) continue;
            for(long long y=1;x*y<=n;y++){
                if(y>n || pos[y].empty()) continue;
                long long d=x*y;
                for(int i:pos[x]){
                    int j=i+d;
                    if(j>n) break;
                    if(a[j]==y) ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
