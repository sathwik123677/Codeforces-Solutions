#include<bits/stdc++.h>
using namespace std;
// bool f(vector<int> &a,int k){
//     for(int i=1;i<=a.size()-1;i++){
//         if(abs(a[i]-i)%k!=0){
//             return false;
//         }
//     }
//     return true;
// }
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int gc=0;
        for(int i=1;i<=n;i++){
            gc=__gcd(gc,abs(a[i]-i));
        }
        cout<<gc<<endl;
    //   int l=1,r=n; 
    //   while(l<r){
    //       int mid=(l+r)/2;
    //       if(f(a,mid)){
    //           r=mid;
    //       }
    //       else{
    //           l=mid+1;
    //       }
    //   }
    //   cout<<r<<endl;
        
    }
    return 0;
}