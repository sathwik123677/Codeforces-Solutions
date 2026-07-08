#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    int cnt=0;
    int ans=0;
    while(n){
        if(n%10==0)cnt++;
        else ans++;
        n/=10;
    }
    return ans==1;
}
int main(){
    vector<int> v(1000001,0);
    for(int i=1;i<=1000000;i++){
        if(check(i)){
            v[i]=v[i-1]+1;
        }else{
            v[i]=v[i-1];
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        ans=v[n];
        cout<<ans<<endl;
    }
    return 0;
}