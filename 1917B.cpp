#include<bits/stdc++.h>
using namespace std;
// set<string> st;
// void f(string s){
   
//     if (st.count(s)) return;
//     st.insert(s);
//     if (s.size()<=1) return;
//     f(s.substr(1));
//    if(s.size()>=2){
//     string t=s.substr(0,1)+s.substr(2);
//     f(t);
//    }
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        int cnt=0;
        map<char,int> mp;
        for(int i=0;i<n;i++){
           mp[s[i]]++;
           if(mp[s[i]]==1){
               cnt++;
        }
        ans+=cnt;
    }
    cout<<ans<<endl;
    }
        return 0;
}