#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if(!(cin>>t)) return 0;
    while(t--){
        long long s;
        int q;
        cin>>s>>q;
        vector<long long> d;
        for(long long i=1;i*i<=s;i++){
            if(s%i==0){
                d.push_back(i);
                if(i*i!=s) d.push_back(s/i);
            }
        }
        sort(d.begin(),d.end());
        int k=d.size();
        vector<long long> h(k);
        vector<long long> p(k+1,0);
        
        for(int i=0;i<k;i++){
            h[i]=s/d[i];
            long long w=d[i]-(i==0?0:d[i-1]);
            p[i+1]=p[i]+w*h[i];
        }
        while(q--){
            long long x,y;
            cin>>x>>y;
            int u=upper_bound(d.begin(),d.end(),x)-d.begin();
            int v=upper_bound(h.begin(),h.end(),y,greater<long long>())-h.begin();
            int l=min(u,v);
            long long a=(l>0?d[l-1]*y:0);
            long long b=(u>l?p[u]-p[l]:0);
            long long c=0;
            if(u<k&&x>d[u-1]){
                long long w=x-d[u-1];
                c=w*min(h[u],y);
            }
            cout<<a+b+c<<"\n";
        }
    }
    return 0;
}
