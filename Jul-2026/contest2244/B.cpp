#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        long long p=0,c=0;
        bool o=true;
        for(int i=0;i<n-1;i++){
            long long x=a[i]+c;
            if(x<p+1){
                o=false;
                break;
            }
            long long y=p+1;
            c=x-y;
            p=y;
        }
        if(o && a[n-1]+c<=p)o=false;
        cout<<(o?"YES":"NO")<<"\n";
    }
    return 0;
}