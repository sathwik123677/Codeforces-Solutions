#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> pref(n+1,0);
        vector<int> suff(n+1,0);
        unordered_set<char> seen;
        for(int i=0;i<n;i++){
            seen.insert(s[i]);
            pref[i+1]=seen.size();
        }
        seen.clear();
        for(int i=n-1;i>=0;i--){
            seen.insert(s[i]);
            suff[i]=seen.size();
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans=max(ans,pref[i+1]+suff[i+1]);
        }        cout<<ans<<"\n";
    }
    return 0;
}