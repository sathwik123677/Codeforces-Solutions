#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
       string s;
         cin>>s;
            int n=s.length();
            if(s[0]!=s[n-1]){
        if(s[0]=='a')s[0]='b';
        else s[0]='a';
        
    }
    cout<<s<<endl;
    
}
return 0;
}