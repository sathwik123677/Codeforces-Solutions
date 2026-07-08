#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
      long long n,q;
        cin>>n>>q;
        long long sum=0;
        vector<long long>pre(n+1,0);
      
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            pre[i+1]=pre[i]+a[i];
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long sub=pre[r]-pre[l-1];
           long long new_sum=sum-sub+(r-l+1)*k;

            if(new_sum%2==0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
}
return 0;
}