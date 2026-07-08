#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long mx=0;
        long long sum=0;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
           
            sum+=a[i];
            mx+=ceil(a[i]*1.0/x);
        }
     long long mi=ceil(sum*1.0/x);
     cout<<mi<<" "<<mx<<endl;  
    }
    return 0;
}