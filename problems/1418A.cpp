#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
       long long x,y,k;cin>>x>>y>>k;
        long long sn=k*y+k-1;
        long long ans=ceil((double)sn/(x-1));
        cout<<ans+k<<endl;

    }
    return 0;
}