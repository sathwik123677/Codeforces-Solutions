#include<bits/stdc++.h>
using namespace std;    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>grid(n,vector<int>(m));
        int ans=0;
        int nm=0;
        int min_abs=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
                ans+=abs(grid[i][j] );
                min_abs=min(min_abs,abs(grid[i][j]));
                if(grid[i][j]<0)nm++;
            }
        }
        if(nm%2==1){
            ans-=2*min_abs;
        }
        cout<<ans<<endl;
    }
    return 0;
}