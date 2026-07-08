#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> a(n);   
    for(int i=0;i<n;i++) cin>>a[i];
    long long ans=0;
    int i=0;
    long long cnt=0;
    while(i<n){
        if(a[i]<=q){
            cnt++;
        
        }
        else{
            if(cnt>=k){
                long long x=cnt - k + 1;
                ans+= (x*(x+1))/2;
            }
            cnt=0;
        }
        i++;
    }
    if(cnt>=k){
        long long x=cnt - k + 1;
        ans+= (x*(x+1))/2;
    }
    cout<<ans<<endl;
}
}