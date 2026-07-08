#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
      cin>>t;
      while(t--){
            int n,val;
            cin>>n>>val;
            if(n==1){
            cout<<1<<"\n";
            continue;
        }
         val--;
            if(n%2==0){
              
               cout<<(val%n)+1<<"\n";
            }
            else{
               cout<<((val+(val /(n/2)))%n) + 1<<"\n";
            }
      }
    
    return 0;
}