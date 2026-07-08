#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum=0;
    vector<int> a(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        mp[a[i]]++;
    }
    vector<int> ans;
for(int i=0;i<n;i++){
    long long x=sum-a[i];
    mp[a[i]]--;
    if(x%2==0){
        x/=2;

        if(mp.find(x)!=mp.end() && mp[x]>0){
            ans.push_back(i+1);
        }
    }
    mp[a[i]]++;
}
cout<<ans.size()<<endl;
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}