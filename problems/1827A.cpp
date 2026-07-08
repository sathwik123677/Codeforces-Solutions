#include<bits/stdc++.h>
using namespace std;
#define MOD (long long )(1e9+7)
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++) cin>>b[i];
        sort(b.rbegin(),b.rend());
        long long res=1;
        for(int i=0;i<n;i++){
            long long temp=upper_bound(a.begin(),a.end(),b[i])-a.begin();
            long long count=n-temp;
            res=res*max(0LL,count-i)%MOD;

        }
        cout<<res<<"\n";
    }
    return 0;
}