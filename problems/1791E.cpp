#include<bits/stdc++.h>
using namespace std;    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        int neg=0;
        cin>>n;
        long long sum=0;
        vector<long long> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]<0){
                a[i]=-a[i];
                neg++;
            }
            sum+=a[i];
        }
     if(neg%2==1)sum-=2*(*min_element(a.begin(),a.end()));
     cout<<sum<<endl;  
    }
    return 0;
}