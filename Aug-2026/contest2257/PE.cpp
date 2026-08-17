#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<tuple>
#include<bits/stdc++.h>
using namespace std;

typedef pair<long long,long long> P2;
typedef pair<P2,pair<int,int>> P4;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if(!(cin>>t)) return 0;
    while(t--){
        int n;
        long long x;
        cin>>n>>x;
        vector<int> m(n);
        vector<vector<long long>> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>m[i];
            a[i].resize(m[i]);
            for(int j=0;j<m[i];j++){
                cin>>a[i][j];
            }
            b[i].resize(m[i]);
            for(int j=0;j<m[i];j++){
                cin>>b[i][j];
            }
        }
        vector<vector<P4>> w(n);
        for(int i=0;i<n;i++){
            vector<P4> s;
            for(int j=0;j<m[i];j++){
                long long r=a[i][j];
                long long g=b[i][j]-a[i][j];
                int c=1;
                while(!s.empty()){
                    long long or2=s.back().first.first;
                    long long og=s.back().first.second;
                    int oc=s.back().second.first;
                    if(og<=0||or2>=r-og){
                        s.pop_back();
                        r=max(or2,r-og);
                        g+=og;
                        c+=oc;
                    }else{
                        break;
                    }
                }
                s.push_back({{r,g},{c,i}});
            }
            w[i]=s;
        }
        priority_queue<P4,vector<P4>,greater<P4>> q;
        vector<int> f(n,0),p(n,0);
        for(int i=0;i<n;i++){
            if(!w[i].empty()&&w[i][0].first.second>0){
                q.push(w[i][0]);
            }
        }
        while(!q.empty()){
            P4 u=q.top();
            if(x<u.first.first) break;
            q.pop();
            x+=u.first.second;
            int i=u.second.second;
            f[i]+=u.second.first;
            p[i]++;
            if(p[i]<(int)w[i].size()&&w[i][p[i]].first.second>0){
                q.push(w[i][p[i]]);
            }
        }
        int h=0,e=1;
        for(int i=0;i<n;i++){
            int j=f[i];
            long long c=x;
            while(j<m[i]&&c>=a[i][j]){
                c+=b[i][j]-a[i][j];
                j++;
            }
            if(j>h){
                h=j;
                e=i+1;
            }
        }
        cout<<h<<" "<<e<<"\n";
    }
    return 0;
}
