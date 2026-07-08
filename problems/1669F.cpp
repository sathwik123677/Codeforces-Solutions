#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
       for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int ans=0;
        int l=0;
        int ls=0,rs=0;
        int r=n-1;
        while(l<=r){
         if(ls<=rs){
            ls+=a[l];
            l++;
         }
         else {
            rs+=a[r];
            r--;
         }
            if(ls==rs){
                ans=l+n-r-1;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}