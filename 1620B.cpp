#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long w,h;
        cin>>w>>h;
        long long area=-1;
        for(int i=0;i<4;i++){
            long long k;
            cin>>k;
            long long first,last;
            for(int j=0;j<k;j++){
                long long x;
                cin>>x;
                if(j==0)first=x;
                if(j==k-1)last=x;
            }
            long long base=last-first;
            long long height;
            if(i<2)height=h;
            else height=w;
            area=max(area,base*height);
        }
        cout<<area<<"\n";
    }
    return 0;
}