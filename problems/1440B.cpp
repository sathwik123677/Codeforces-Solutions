#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k;
         cin>>n>>k;
            vector<long long> a(n*k);
            for(int i=0;i<n*k;i++){
                cin>>a[i];
            }
            sort(a.begin(),a.end());
            long long ans=0;
            long long pos=n*k;
            while(k--){
                pos-=(n/2+1);
                ans+=a[pos];
            }
            cout<<ans<<endl;
    }
    return 0;
}