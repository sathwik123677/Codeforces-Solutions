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
        vector<long long >odd(n+1,0),even(n+1,0);
        even[0]=a[0];
        map<long long ,int> m;
        m[odd[0]-even[0]]++;
        bool flag=false;
        for(int i=1;i<n;i++){
           odd[i]+=odd[i-1];
           even[i]+=even[i-1];
           if(i%2)odd[i]+=a[i];
           else even[i]+=a[i];
           m[odd[i]-even[i]]++;
            if(m[odd[i]-even[i]]==2 || even[i]==odd[i]){
               flag=true;
               break;
            }

        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}