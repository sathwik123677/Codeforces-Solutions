#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=INT_MAX;
        vector<int> pre(n + 1, 0);
       // pre[0] = s[0] == 'W' ? 1 : 0;
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + (s[i - 1] == 'W');
        }
        for(int i=0;i<=n - k;i++){
           ans=min(ans,pre[i+k]-pre[i]);
        }
        cout<<ans<<endl;
    }
}