#include<bits/stdc++.h>
using namespace std; 
long long mod = 1e9 + 7;   
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337) % mod;
        cout<<ans<<"\n";
    }
    return 0;
}