#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> m;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            m[a[i]]++;
        }
        int ans=0;
        for(auto i:m){
            ans+=max(0,m[i.first]-m[i.first-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}