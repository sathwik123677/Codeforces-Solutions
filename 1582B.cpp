#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        long long zeros=0;
        long long ones=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)zeros++;
            if(a[i]==1)ones++;
        }
        long long ans=0;
        ans=pow(2,zeros)*ones;
        cout<<ans<<endl;
    }
}