#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long> a(n);
        long long sum=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
        }
        long long ans=0;
        long long curr=a[0];
        for(int i=1;i<n;i++){
            long long g=__gcd(curr,sum-curr);
            ans=max(ans,g);
            curr+=a[i];
        }
        cout<<ans<<endl;
    }
        return 0;
}