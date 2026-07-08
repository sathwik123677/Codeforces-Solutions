#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long ans=0;
        vector<long long>prefix(n,0);
        prefix[0]=a[0];
        for(long long i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
        }
        for(long long i=0;i<=k;i++){
            long long left=2*i;
            long long right=n-1-(k-i);
            long long sum=prefix[right]-((2*i)==0?0:prefix[2*i-1]);
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}