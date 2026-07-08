#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){

    ll n,c;
    cin>>n>>c;
    vector<ll> a;
    ll x;
    for(ll i=1;i<=n;i++){
        cin>>x;
        a.push_back(i+x);
    }
    sort(a.begin(),a.end());
    ll ans=0;
    ll i=0;
    while(i<n && a[i]<=c){
        c-=a[i];
        ans++;
        i++;
       
    }
    cout<<ans<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        
    }
    return 0;
}