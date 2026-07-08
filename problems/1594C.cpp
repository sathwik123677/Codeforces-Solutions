#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
         char c;
        cin>>n>>c;
       
        string s;
        cin>>s;
        bool ok=true;
       for(int i=0;i<n;i++){
           if(s[i]!=c){
               ok=false;
               break;
           }
       }
       if(ok){
        cout<<0<<endl;
        continue;
       }
       int val=-1;
       for(long long i=2;i<=n;i++){
              bool f=true;
              for(long long j=i;j<=n;j+=i){
                if(s[j-1]!=c){
                     f=false;
                     break;
                }
              }
              if(f){
                val=i;
                break;
              }
       }
       if(val==-1)cout<<2<<endl<<n<<" "<<n-1<<endl;
       else cout<<1<<endl<<val<<endl;
    }
    return 0;
}