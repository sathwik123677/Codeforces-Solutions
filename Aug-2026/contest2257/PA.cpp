#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(26,0),u(m,0);
        vector<string>a(m);
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            v[s[0]-'a']=1;
        }

        for(int i=0;i<m;i++)cin>>a[i];
        int c=0;
        while(1){
            int z=0;
            for(int i=0;i<m;i++){
                if(u[i])continue;
                bool ok=1;
                for(char x:a[i]){
                    if(!v[x-'A']){
                        ok=0;
                        break;
                    }
                }
                if(ok){
                    u[i]=1;
                    v[a[i][0]-'A']=1;
                    c++;
                    z=1;
                }
            }
            if(!z)break;
        }
        cout<<(c==m?"YES":"NO")<<'\n';
    }
    return 0;
}