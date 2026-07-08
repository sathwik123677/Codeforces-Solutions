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
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i].first;
            a[i].second=i;
        }
        bool ok=false;
       vector<int> ans(n);
       for(int i=0;i<n;){
           int j=i;
           while(j<n && a[j].first==a[i].first) j++;
           if(j-i==1){
            ok=true;
            break;
           }
              for(int k=i;k<j;k++){
               int curr=a[k].second;
               int nxt=a[(k+1)==j?i:k+1].second;
               ans[curr]=nxt;
              }
                i=j;
       }
       if(ok){
        cout<<-1<<endl;
        continue;
       }
         for(int i=0;i<n;i++){
          cout<<ans[i]+1<<" ";
       }
         cout<<endl;
   
    }
        return 0;
}
    
