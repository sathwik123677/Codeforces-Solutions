#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n,p;
        cin>>n>>p;
        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        long long ans=0;
        vector<pair<long long,long long>> v;
        for(int i=0;i<n;i++){
            v.push_back({b[i],a[i]});
        }
        sort(v.begin(),v.end());
       
        long long known=0;
        for(int i=0;i<n;i++){
          if(v[i].first>p)break;
          if(known==0){
            ans+=p;
            known++;
          }
          long long need=min(v[i].second,n-known);
            ans+=need*v[i].first;
            known+=need;

        } 
        if(known<n)ans+= (n-known)*p;
               cout<<ans<<"\n";
    }
    return 0;
}