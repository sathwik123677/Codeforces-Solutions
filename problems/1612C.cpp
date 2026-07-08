#include<bits/stdc++.h>
using namespace std;
bool check(long long mid,long long k,long long x){
    long long sum;
    if(mid<=k){
        sum = mid*(mid+1)/2;
    }
    else{
        long long first = k*(k+1)/2;
        long long rem = mid-k;
        long long second = rem*(2*k-rem-1)/2;
        sum = first + second;
    }

    return sum >= x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k,x;
        cin>>k>>x;
        long long ans=2*k-1;
        long long l=1,r=2*k-1;
        while(l<=r){
            long long mid=(l+r)/2;
            long long sum=0;
            if(check(mid,k,x)){
                ans=mid;
                r=mid-1;
            }
            else{
               l=mid+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}