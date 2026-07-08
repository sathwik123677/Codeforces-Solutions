#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
       bool ans=false;
       if((a + c) % 2 == 0 && (a + c) / 2 == b) ans=true;
       long long n_a=2*b-c;
         long long n_b=(a+c)/2;
            long long n_c=2*b - a;
         if(n_a>0 && n_a%a==0) ans=true;
         if(n_b>0 && (a+c)%2==0 && n_b%b==0) ans=true;
         if(n_c>0 && n_c%c==0) ans=true;
            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
}