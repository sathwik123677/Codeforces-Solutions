#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<string> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        int ans=0;
        for(int i=0; i<(n+1)/2; i++){
            for(int j=0; j<n/2; j++){
                int c0=0, c1=0;
               char x1 = a[i][j];
                char x2 = a[j][n-i-1];
                char x3 = a[n-i-1][n-j-1];
                char x4 = a[n-j-1][i];
                if(x1=='0') c0++;
                else c1++;
                if(x2=='0') c0++;
                else c1++;
                if(x3=='0') c0++;
                else c1++;
                if(x4=='0') c0++;
                else c1++;
                if(c0==0 || c1==0) continue;
                ans+=min(c0, c1);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}