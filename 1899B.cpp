#include<bits/stdc++.h>
using namespace std;
long long solve(vector<long long> &b,int n){
    long long res=0;
    for(int k=1;k<=n;k++){
        if(n%k)continue;
        int i=k-1;
        long long mn=b[i];
        long long mx=b[i];
        for(int j=i+k;j<n;j+=k){
            long long curr=b[j]-b[j - k];
            mn=min(mn,curr);
            mx=max(mx,curr);
        }
        res=max(res,mx-mn);
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n,0);
        vector<long long> b(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0)b[i]=a[i];
            else b[i]=b[i-1]+a[i];
        }
        long long  ans=solve(b,n);
        cout<<ans<<endl;
}
}