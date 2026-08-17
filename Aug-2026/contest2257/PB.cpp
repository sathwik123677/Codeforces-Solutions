#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if(!(cin>>t)) return 0;
    while(t--){
        long long n,m,a,b,v;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>v;
            if(i==0) a=v;
        }
        for(int i=0;i<m;i++){
            cin>>v;
            if(i==0) b=v;
        }
        long long x=a+n-1;
        long long y=b+m-1;
        if(x>=y) cout<<1<<"\n";
        else cout<<2<<"\n";
    }
    return 0;
}
