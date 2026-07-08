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
        int ans=1;
        bool ok=false;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                ans++;
            }
            else ok=true;
        }
        if(ans==1)cout<<1<<endl;
        else {
           if(!ok)  cout<<ans<<endl;
           else cout<<ans+1<<endl;
        }
        
    }
    return 0;
}