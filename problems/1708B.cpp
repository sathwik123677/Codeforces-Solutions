#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,l,r;
        cin>>n>>l>>r;
      
        vector<long long> ans;
        bool ok=true;
        for(long long i=1;i<=n;i++){
            //calculate the multiple of i greater than or equal to l
           long long temp = ((l + i - 1) / i) * i;
          
            if(temp > r){
                ok=false;
                break;
            }
             ans.push_back(temp);
        }
        if(!ok){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(long long i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        
        

    }
}