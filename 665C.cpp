#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    string ans=s;
    for(int i=1;i<n;i++){
        if(ans[i]==ans[i-1]){
           if(i!=n-1){
            for(char ch='a';ch<='z';ch++){
                if(ch!=ans[i+1] && ch!=ans[i-1]){
                    ans[i]=ch;
                    break;
                }
            }
           }
              else{
                for(char ch='a';ch<='z';ch++){
                 if(ch!=ans[i-1]){
                      ans[i]=ch;
                      break;
                 }
                }
              }
        }
    }
cout<<ans<<"\n";

}