#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    while(n--){
        long long a,b; cin>>a>>b;
        if(a<b)swap(a,b);
        if(a==b)cout<<0<<" "<<0<<endl;
        else{
            long long d=a-b;
            cout<<d<<" "<<min(b%d,d-b%d)<<endl;
        }
        
    }
}