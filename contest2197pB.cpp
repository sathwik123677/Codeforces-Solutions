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
        vector<int> p(n+1), a(n+1);
        for(int i=1;i<=n;i++) cin>>p[i];
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<int> pos(n+1);
        for(int i=1;i<=n;i++){
            pos[p[i]] = i;
        }
        vector<int> L(n+1, n+1), R(n+1, 0);
        for(int i=1;i<=n;i++){
            int x = a[i];
            L[x] = min(L[x], i);
            R[x] = max(R[x], i);
        }
        bool ok = true;
        for(int x=1;x<=n;x++){
            if(R[x] == 0) continue;
            if(pos[x] < L[x] || pos[x] > R[x]){
                ok = false;
                break;
            }
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
