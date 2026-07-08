#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int din=n-k+1;
    long long sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    long long ans=sum;
    for(int i=k;i<n;i++){
        sum+=a[i];
        sum-=a[i-k];
        ans+=sum;
    }
    double res=(double)ans/din;
    cout<<fixed<<setprecision(6)<<res<<endl;
    return 0;
}