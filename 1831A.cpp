#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
         cin>>n;
            vector<int> a(n);
            vector<int> b;
            for(int i=0;i<n;i++){
                cin>>a[i];
               b.push_back(n+1-a[i]);
            }
           
            for(int i=0;i<n;i++){
                cout<<b[i]<<" ";
            }
    }
    return 0;
}