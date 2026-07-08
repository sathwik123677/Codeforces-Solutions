#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mx=0;
        vector<int> a(n);
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
          mx=max(mx,a[i]);
        }
        vector<int> b(mx+1,0);
        for(int i=0;i<n;i++){
            b[a[i]]=max(b[a[i]],i+1);
        }
      int ans=-1;
      for(int i=0;i<=mx;i++){  
        if(b[i]==0) continue;
        for(int j=i+1;j<=mx;j++){
           if(b[j]!=0 &&__gcd(i,j)==1){
               ans=max(ans,b[i]+b[j]);
           }
        }
    }
    if (b[1]>0) {
            ans=max(ans,2*b[1]);
        }

    cout<<ans<<endl;
    }
    return 0;
}