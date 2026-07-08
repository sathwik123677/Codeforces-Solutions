#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       vector<int> a(n);
       int cnt=0;
       int ans=INT_MAX;
       for(int i=0;i<n;i++){
           cin>>a[i];
           if(a[i]%2==0)cnt++;
           if(a[i]%k==0)ans=0;
           ans=min(ans,(k-a[i]%k));
       }
       if(k==4){
        if(cnt>=2)ans=min(ans,0);
        else if(cnt==1)ans=min(ans,1);
        else if(cnt==0)ans=min(ans,2);
       }
      cout<<ans<<endl; 
    }
    return 0;
}