#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<long long> x(n+1),y(n+1);
        for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
        long long ans=llabs(x[a]-x[b])+llabs(y[a]-y[b]);
        long long mina=1e15;
        long long minb=1e15;
        for(int i=1;i<=k;i++){
            mina=min(mina,(long long)(llabs(x[a]-x[i])+llabs(y[a]-y[i])));
            minb=min(minb,(long long)(llabs(x[b]-x[i])+llabs(y[b]-y[i])));
        }
        ans=min(ans,mina+minb);
        cout<<ans<<endl;
    }
    return 0;
}