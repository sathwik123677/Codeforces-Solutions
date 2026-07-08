#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        map<int,int> m;
        m[0]=-1;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int sum=0;
        int len=-1;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(m.count(sum-s)){
                len=max(len,i-m[sum-s]);
            }

           if(!m.count(sum)){
                m[sum]=i;
            }
        }
        if(len==-1){
            cout<<-1<<endl;
            continue;
        }
        cout<<n-len<<endl;
    }
    return 0;
}