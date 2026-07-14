#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m;
    cin>>n>>m;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>b(m);
    for(int i=0;i<m;i++)cin>>b[i];
    sort(b.begin(),b.end());
    long long ans=0,s=0;
    int p=0;
    for(int i=0;i<m;i++){
        s=0;
        for(int j=p;j<b[i];j++)s+=a[j];
        ans+=abs(s);
        p=b[i];
    }
    for(int j=p;j<n;j++)ans+=a[j];
    cout<<ans<<"\n";
    }

    return 0;
}