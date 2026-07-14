#include<bits/stdc++.h>
using namespace std;
int n;
vector<long long>bit;
void upd(int i,long long v){
    while(i<=n){
        bit[i]=max(bit[i],v);
        i+=i&-i;
    }
}
long long qry(int i){
    long long r=0;
    while(i>0){
        r=max(r,bit[i]);
        i-=i&-i;
    }
    return r;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long>a(n+1);
        for(int i=1;i<=n;i++)cin>>a[i];
        vector<vector<int>>ev(n+1);
        bit.assign(n+1,0);
        vector<long long>dp(n+1,0);
        long long ans=0;
        for(int i=1;i<=n;i++){
            for(int x:ev[i-1])upd(x,dp[x]);
            int k=i-a[i]-1;
            k=max(0,k);
            k=min(n,k);
            dp[i]=a[i]+qry(k);
            ans=max(ans,dp[i]);
            if(i+a[i]<n)ev[i+a[i]].push_back(i);
        }
        cout<<ans<<"\n";
    }
    return 0;
}