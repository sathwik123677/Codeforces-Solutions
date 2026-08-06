#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int z=0;
        for(char c:s)if(c=='0')z++;
        int o=n-z;
        int T=z-o;

        const int NEG=-1e9;
        int dp[2][2];
        for(int i=0;i<2;i++)for(int j=0;j<2;j++)dp[i][j]=NEG;

        for(char ch:s){
            int c=ch-'0';
            int nd[2][2];
            for(int i=0;i<2;i++)
                for(int j=0;j<2;j++)
                    nd[i][j]=dp[i][j];

            nd[c][c]=max(nd[c][c],1);

            for(int st=0;st<2;st++){
                if(dp[st][1-c]!=NEG)
                    nd[st][c]=max(nd[st][c],dp[st][1-c]+1);
            }

            for(int i=0;i<2;i++)
                for(int j=0;j<2;j++)
                    dp[i][j]=nd[i][j];
        }

        int best=-1;
        if(abs(T)<=1)best=0;
        if(dp[0][0]!=NEG&&abs(T-1)<=1)best=max(best,dp[0][0]);
        if(dp[0][1]!=NEG&&abs(T)<=1)best=max(best,dp[0][1]);
        if(dp[1][0]!=NEG&&abs(T)<=1)best=max(best,dp[1][0]);
        if(dp[1][1]!=NEG&&abs(T+1)<=1)best=max(best,dp[1][1]);

        if(best==-1)cout<<-1<<"\n";
        else cout<<n-best<<"\n";
    }
    return 0;
}