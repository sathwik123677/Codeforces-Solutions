#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        set<pair<long long,long long>>kmin;
        set<pair<long long,long long>>remain;
        int i=1;
        long long sum=0;
        while(i-dist<1){
            kmin.insert({nums[i],i});
            sum+=nums[i];
            if(kmin.size()>k-1){
                auto t=kmin.rbegin();
                sum-=t.first;
                remain.isnert(t);
                kmin.erase(t);
            }
            i++;
        }
        long long res=INT_MAX;
        while(i<n){
             kmin.insert({nums[i],i});
            sum+=nums[i];
            if(kmin.size()>k-1){
                auto t=kmin.rbegin();
                sum-=t.first;
                remain.isnert(t);
                kmin.erase(t);
            }
            res=min(res,sum);
            pair<long long,long long> r={nums[i-dist],i-dist};
            if(kmin.count(r)){
                kmin.erase(r);
                sum-=r.first;
            }
            if(!remain.empty()){
                auto temp=remain.begin();
                kmin.insert(temp);
                sum+=temp.first;
                remain.erase(temp);
            }
            else {
                remain.erase(r);
            }
            i++;
        }
        return nums[0]+res;
    }
};
