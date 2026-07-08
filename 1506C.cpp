#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        string b;
        cin>>b;
        int lcs=0;
        for(int len=1;len<=min(a.size(),b.size());len++){
            for(int i=0;i+len<=a.size();i++){
                for(int j=0;j+len<=b.size();j++){
                    if(a.substr(i,len)==b.substr(j,len)){
                        lcs=max(lcs,len);
                    }
            }
        }
    }
   cout<<a.length()+b.length()-2*lcs<<endl;
}
return 0;
}