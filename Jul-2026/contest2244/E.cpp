#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
          int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int>d(n);
    for(int i=0;i<n;i++){
        char c=(i%2==0)?'1':'0';
        d[i]=(s[i]!=c);
    }
    vector<int>a(n,0),b(n,0);
    for(int i=1;i<n;i++){
        a[i]=a[i-1];
        b[i]=b[i-1];
        if(d[i-1]==0 && d[i]==1)a[i]++;
        if(d[i-1]==1 && d[i]==0)b[i]++;
    }
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        l--;
        r--;
        int u=a[r]-a[l]+(d[l]==1);
        int v=b[r]-b[l]+(d[l]==0);
        if(u<=k || v<=k)cout<<"YES\n";
        else cout<<"NO\n";
    }
    }

    return 0;
}