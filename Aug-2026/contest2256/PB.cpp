#include <iostream>
#include <string>
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    int a=1,b=1,c=1,d=1;
    for(int i=0;i<n;i+=2){
        char x='0'+((i/2)&1);
        char y='1'-((i/2)&1);
        if(s[i]!='?'&&s[i]!=x)a=0;
        if(s[i]!='?'&&s[i]!=y)b=0;
    }
    for(int i=1;i<n;i+=2){
        char x='0'+(((i-1)/2)&1);
        char y='1'-(((i-1)/2)&1);
        if(s[i]!='?'&&s[i]!=x)c=0;
        if(s[i]!='?'&&s[i]!=y)d=0;
    }
    long long ans=1LL*(a+b)*(c+d)%998244353;
    cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if(cin>>t){
        while(t--)solve();
    }
    return 0;
}