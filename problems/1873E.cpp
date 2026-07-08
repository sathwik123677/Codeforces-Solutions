#include<bits/stdc++.h>
using namespace std;
bool f(long long mid,vector<long long> &a,long long x){
    long long sum=0;
    for(int i=0;i<a.size();i++){
        if(a[i]<mid){
            sum+=(mid-a[i]);
        }
    }

    return sum<=x;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        long long l=1;
        long long r=1e12;
        long long ans=-1;
        while(l<=r){
           long long mid=l+(r-l)/2;
           if(f(mid,a,x)){
               ans=mid;
               l=mid+1;
           }
           else{
               r=mid-1;
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}