#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        map<long long,long long> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        long long curr=0;
        long long ans=0;
        for(auto i:mp){
           curr=max(curr,i.second);
        }
        while(curr<n){
            ans++;
            if(curr*2<=n){
                 ans+=curr;
                curr*=2;
               
            }
            else{
                ans+=n-curr;
                curr=n;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}