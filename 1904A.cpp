#include<bits/stdc++.h>
using namespace std;
int dx[4]={-1,1,-1,1},dy[4]={-1,-1,1,1};
int main(){
     int t;
     cin>>t;
     while(t--){
        long long a,b;
        cin>>a>>b;
        long long xk,yk;
        cin>>xk>>yk;
        long long xq,yq;
        cin>>xq>>yq;
        set<pair<long long,long long>> k,q;
        for(int i=0;i<4;i++){
            k.insert({xk+dx[i]*a,yk+dy[i]*b});
            k.insert({xk+dx[i]*b,yk+dy[i]*a});
            q.insert({xq+dx[i]*a,yq+dy[i]*b});
            q.insert({xq+dx[i]*b,yq+dy[i]*a});
        }
        int ans=0;
        for(auto i:k){
            if(q.find(i)!=q.end()){
                ans++;
            }
        }
        cout<<ans<<endl;
     }
        return 0;
}