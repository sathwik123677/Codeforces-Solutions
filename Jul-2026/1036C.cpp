#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll dp[20][4][2];
vector<int> dig;
ll solve(int pos,int cnt,int tight){
    if(cnt>3) return 0;
    if(pos==dig.size()) return 1;
    if(dp[pos][cnt][tight]!=-1)return dp[pos][cnt][tight];
    int lim=tight?dig[pos]:9;
    ll ans=0;
    for(int d=0;d<=lim;d++){
        ans+=solve(pos+1,
                   cnt+(d!=0),
                   tight&&(d==lim));
    }
    return dp[pos][cnt][tight]=ans;
}
ll f(ll x){
    if(x<0) return 0;
    dig.clear();
    string s=to_string(x);
    for(char c:s)
        dig.push_back(c-'0');
    memset(dp,-1,sizeof(dp));
    return solve(0,0,1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        ll L,R;
        cin>>L>>R;
        cout<<f(R)-f(L-1)<<"\n";
    }
}