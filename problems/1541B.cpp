#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
           cin>>v[i].first;
              v[i].second=i+1;
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(1LL*v[i].first*v[j].first>=2*n)break;
                 if(v[i].first*v[j].first==v[i].second+v[j].second)ans++;
            }
        }
        cout<<ans<<endl;
    }
        return 0;
}