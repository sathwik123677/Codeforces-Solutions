#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> a(n);
        long long ans=0;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=1;i<60;i++){
            unordered_set<long long> s;
            long long k=1LL<<i;
            for(int j=0; j<n; j++){
                s.insert(a[j]%k);
            }
            if(s.size()==2){
                ans=k;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}