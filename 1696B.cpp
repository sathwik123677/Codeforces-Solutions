#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        bool flag=false;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) cnt++;
        }
    int i=0;
    int j=n-1;
    while(i<n &&a[i]==0)i++;
    while(j>=0 && a[j]==0)j--;
    while(i<=j){
        if(a[i]==0)flag=true;
        i++;
    }
    if(cnt==n)cout<<0<<endl;
    else if(flag)cout<<2<<endl;
    else cout<<1<<endl;
    }
    return 0;
}