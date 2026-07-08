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
          if(c=='g'){
        cout<<0<<endl;
        continue;
       }
         int ans=0;
         string ss=s+s;
         int nextg=-1;
         for(int i=2*n-1;i>=0;i--){
            if(ss[i]=='g'){
                nextg=i;

            }
            if(i<n && ss[i]==c){
                ans=max(ans, nextg - i);
            }
         }
            cout<<ans<<endl;
    }
}