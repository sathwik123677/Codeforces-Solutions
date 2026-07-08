#include<bits/stdc++.h>
using namespace std;
// class compartor{
// public:
//     bool operator()(pair<int,int> &a,pair<int,int> &b){
//         if(a.first==b.first) return a.second>b.second;
//         return a.first<b.first;
//     }
// };
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
       // priority_queue<pair<int,int>,vector<pair<int,int>>,compartor> pq;
       vector<pair<int,int>> v;
       vector<int> res;
        for(int i=0;i<n;i++){
            int rem=a[i]%k;
            if(rem==0)rem=k;
            v.push_back({-rem, i + 1});
        }
        sort(v.begin(), v.end());
        for(int i=0;i<n;i++){
           cout << v[i].second << (i + 1 < n ? ' ' : '\n');
        }
        // for(int i=0;i<n;i++){
        //     if(a[i]>0) pq.push({a[i],i+1});
        // }
        // vector<int> res;
        // while(!pq.empty()){
        //     pair<int,int> p=pq.top();
        //     pq.pop();
        //     int b=p.first-k;
        //     if(b>0) pq.push({b,p.second});
        //     else res.push_back(p.second);
        // }
        // for(int i=0;i<res.size();i++){
        //     cout<<res[i];
        //     if(i!=res.size()-1) cout<<" ";
        // }
        // cout<<"\n";
    }
    return 0;
}