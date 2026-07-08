#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
         cin>>n;
            vector<int> a(n);
            for(int i=0;i<n;i++) cin>>a[i];
            int ans=-1;
           
            for(int j=1;j<n-1;j++){
                int i=-1;
               int k=-1;
                for(int x=0;x<j;x++){
                    if(a[x]<a[j]){
                        i=x;
                        break;
                    }
                }   
                for(int y=j+1;y<n;y++){
                    if(a[y]<a[j]){
                        k=y;
                        break;
                    }
                }
                if(i!=-1 && k!=-1){
                ans=j+1;
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<ans<<" "<<k+1<<endl;
                break;
            }
            }
            
            if(ans==-1) cout<<"NO"<<endl;
    }
    return 0;
}
