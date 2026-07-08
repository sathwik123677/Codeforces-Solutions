#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s;
        cin>>s;
        bool flag=false;
        int ans=0;
        for(int i=0;i<n;i++){
           if(s[i]=='.' && i+2<n && s[i+1]=='.' && s[i+2]=='.'){
              flag=true;
              break;
           }
           if(s[i]=='.'){
              ans++;
           }
        }
        if(flag){
           cout<<2<<endl;
        }
        else{
           cout<<ans<<endl;
        }
    }
    return 0;
}