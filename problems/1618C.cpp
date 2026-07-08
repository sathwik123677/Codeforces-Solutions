#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
       long long gcd1=0,gcd2=0;
       for(int i=0;i<n;i++){
           if(i%2==0) gcd1=__gcd(gcd1,a[i]);
           else gcd2=__gcd(gcd2,a[i]);
       }
       bool flag=true;
       for(int i=0;i<n;i+=2){
           if(a[i]%gcd2==0){
               flag=false;
                break;
           }    
       }
       if(flag && gcd2!=0){
           cout<<gcd2<<endl;
           continue;
       }
         flag=true;
         for(int i=1;i<n;i+=2){
              if(a[i]%gcd1==0){
                flag=false;
                 break;
              }
    }
         if(flag && gcd1!=0){
              cout<<gcd1<<endl;
              continue;
         }
         cout<<0<<endl;
     }
        return 0;
}