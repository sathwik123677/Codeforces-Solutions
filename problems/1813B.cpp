#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        int ans=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        unordered_map<int,int> maxA, maxB;
        for(int i=0;i<n;++i){
          int j=i;
          while(j<n && a[j]==a[i]) j++;
          maxA[a[i]]=max(maxA[a[i]], j-i);
          i=j-1;
        }
         
         for(int i=0;i<n;++i){
          int j=i;
          while(j<n && b[j]==b[i]) j++;
          maxB[b[i]]=max(maxB[b[i]], j-i);
          i=j-1;
        }
       for (auto &it : maxA) {
    ans = max(ans, it.second + maxB[it.first]);
}
for (auto &it : maxB) {
    ans = max(ans, it.second + maxA[it.first]);
}

        cout<<ans<<endl;
    }
}