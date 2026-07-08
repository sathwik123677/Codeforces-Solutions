#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;
cin>>t;
while(t--){
    ll n,c;
    cin>>n>>c;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll ans=-1,l=1,r=1e9;
    while(l<=r){
        ll mid=(l+r)/2;
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=(a[i]+2*mid)*(a[i]+2*mid);
            if(sum>c) break;
        }
        if(sum<=c){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
}
return 0;
}