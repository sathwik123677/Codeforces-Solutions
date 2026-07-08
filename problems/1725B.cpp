#include<bits/stdc++.h>
using namespace std;    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,d;
    cin>>n>>d;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long ans=0;
    long long i=0;
    long long j=n-1;
    //long long cnt=1;

    while(i<=j){
        long long need=d/a[j]+1;
        if(j-i+1>=need){
            ans++;
            i+=need-1;
            j--;
        }else break;

    }
    cout<<ans<<endl;
    return 0;
}