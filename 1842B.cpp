#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ 
        int n,x;
        cin>>n>>x;
       vector<vector<int>> a(3);
       for(int i=0;i<3;i++){
           int s=0;
           a[i].push_back(s);
       for(int j=0;j<n;j++){
               int x;
               cin>>x;
               if((s|x)!=s) {
                s|=x;
                a[i].push_back(s);
               }
           }
       }
       bool ans=false;
       for(int A:a[0]){
              for(int B:a[1]){
                for(int C:a[2]){
                     if((A|B|C)==x){
                          ans=true;
                     }
                }
              }
       }
         if(ans) cout<<"Yes\n";
         else cout<<"No\n";
    }
    return 0;
}