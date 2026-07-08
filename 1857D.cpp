#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        vector<int>maxi(n);
        int maxii=INT_MIN;
        for(int i=0;i<n;i++){
            maxi[i]=a[i]-b[i];
            maxii=max(maxii,maxi[i]);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(maxi[i]==maxii){
                ans.push_back(i+1);
            }
        }
        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}