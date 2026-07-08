#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n);
        vector<long long> preA(n+1,0);
        vector<int> preB(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0)preA[i+1]=a[i];
            else preA[i+1]=preA[i]+a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(i==0)preB[i+1]=b[i];
            else preB[i+1]=max(preB[i],b[i]);
        }
        long long ans=0;
        for(int i=1;i<=min(n,k);i++){
         long long value = preA[i] + (k - i) * preB[i];

         ans=max(ans,value);

        }
        cout<<ans<<endl;
    }
    return 0;

}