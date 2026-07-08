#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                a.push_back(i);
                n/=i;
                if(a.size()==2){
                    break;
                }
            }
        }
        if(a.size()<2 || n==1 || n==a[0] || n==a[1]){
            cout<<"NO\n";
        }
        else{

            
            cout<<"YES\n"<<a[0]<<" "<<a[1]<<" "<<n<<"\n";
        }
    }
    return 0;
}