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
        int cnt=0;
        for(char c:s){
            if(c=='0') cnt++;
        }
        if(cnt%2==0 || cnt==1) cout<<"BOB\n";
        else cout<<"ALICE\n";
    }
    return 0;
}