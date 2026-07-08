#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
      cin>>t;
      while(t--){
            int n;
            cin>>n;
            vector<int> v(n);
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                v[i]=x-i;
            }
       unordered_map<int,int> mp;
       for(int i=0;i<n;i++){
              mp[v[i]]++;
         }
         long long ans=0;
         for(auto it:mp){
              long long x=it.second;
              ans+=(x*(x-1))/2;
            }
            cout<<ans<<"\n";
      }
    
    return 0;
}