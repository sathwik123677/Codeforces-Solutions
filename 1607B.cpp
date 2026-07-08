#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;
        long long ans=x;
    if(x%2==0){
        if(n%4==1)ans=x-n;
        else if(n%4==2)ans=x+1;
        else if(n%4==3)ans=x+n+1;
        else ans=x;
    }
    else{
        if(n%4==3)ans=x-n-1;
        else if(n%4==1)ans=x + n;
        else if(n%4==2)ans=x - 1;
        else ans=x ;
    }
    cout<<ans<<endl;
}
    return 0;
}