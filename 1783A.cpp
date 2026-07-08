#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
         cin>>n;
            vector<int> a(n);
            int maxi=INT_MIN;
            int mini=INT_MAX;
            for(int i=0;i<n;i++){
                cin>>a[i];
                mini=min(mini,a[i]);
                maxi=max(maxi,a[i]);
            }
            if(maxi==mini){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<"\n";
                cout<<maxi<<" ";
                for(int i=0;i<n-1;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
    }
    return 0;
}