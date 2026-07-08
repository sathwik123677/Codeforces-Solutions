#include<bits/stdc++.h>
using namespace std;
long long digitsum(long long x){
    long long sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long ans=0;
        for(long long i=x;i<x+91;i++){
            if(i-digitsum(i)==x)ans++;
        }
        cout<<ans<<endl;
    }
        return 0;
}