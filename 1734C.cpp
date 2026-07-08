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
        long long cnt=0;
        vector<bool> a(n+1,false);
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                if(s[j-1]=='1')break;
                if(a[j])continue;
                    a[j]=true;
                    cnt+=i;
                
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}