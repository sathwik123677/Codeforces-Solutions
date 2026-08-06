#include<bits/stdc++.h>
using namespace std;

struct BIT{
    int n;
    vector<long long>sum,cnt;
    BIT(int n):n(n),sum(n+1,0),cnt(n+1,0){}
    void add(int i,long long v){
        for(;i<=n;i+=i&-i){
            sum[i]+=v;
            cnt[i]++;
        }
    }
    long long qsum(int i){
        long long r=0;
        for(;i>0;i-=i&-i)r+=sum[i];
        return r;
    }
    long long qcnt(int i){
        long long r=0;
        for(;i>0;i-=i&-i)r+=cnt[i];
        return r;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        vector<long long>v(n+1);
        for(int i=1;i<=n;i++)cin>>v[i];

        vector<vector<long long>>a(n+1,vector<long long>(m));
        vector<long long>all;
        all.reserve(1LL*n*m);
        for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                all.push_back(a[i][j]);
            }
        }

        sort(all.begin(),all.end());
        all.erase(unique(all.begin(),all.end()),all.end());

        BIT bit(all.size());
        long long totalSum=0,totalCnt=0;
        long long ans=m;

        for(int i=n;i>=1;i--){
            for(long long x:a[i]){
                int id=lower_bound(all.begin(),all.end(),x)-all.begin()+1;
                bit.add(id,x);
                totalSum+=x;
                totalCnt++;
            }
            if(totalSum<v[i])continue;
            long long lim=totalSum-v[i];
            int idx=0;
            long long cur=0;
            int pw=1;
            while((pw<<1)<=bit.n)pw<<=1;
            for(int k=pw;k;k>>=1){
                if(idx+k<=bit.n&&cur+bit.sum[idx+k]<=lim){
                    idx+=k;
                    cur+=bit.sum[idx];
                }
            }
            long long need=totalCnt-bit.qcnt(idx);
            ans=min(ans,need);
        }
        cout<<ans<<"\n";
    }
    return 0;
}