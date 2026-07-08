#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        long long b;
        for(long long i=0;i<n;i++){
            cin>>a[i];
           if(i==0)b=a[i];
           else b=b&a[i];
        }
        cout<<b<<endl;  
    }
    return 0;
}