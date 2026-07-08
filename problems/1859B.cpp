#include<bits/stdc++.h>
using namespace std;    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>ss;
       long long  ans=INT_MAX;
       for(int i=0;i<n;i++){
        long long m;
        cin>>m;
        vector<long long> a(m);
        for(long long j=0;j<m;j++){
            cin>>a[j];
        }
        sort(a.begin(),a.end());
       ss.push_back(a[1]);
        ans=min(ans,a[0]);
       }
       long long sum=0;
       long long x=INT_MAX;
         for(long long i=0;i<ss.size();i++){
          sum+=ss[i];
          x=min(x,ss[i]);
         }
         cout<<sum-x+ans<<endl;
    }
    return 0;
}