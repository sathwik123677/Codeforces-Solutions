#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> mp;
        long long sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            mp[x]++;
        }
        int mx=0,val=0;
        for(auto &e:mp){
            if(e.second>mx){
                mx=e.second;
                val=e.first;
            }
        }
        int others=n-mx;
        if(mx<=others+1){
            cout<<sum<<"\n";
        }else{
            long long ans=(sum-1LL*mx*val)+1LL*(others+2)*val;
            cout<<ans<<"\n";
        }
    }
    return 0;
}