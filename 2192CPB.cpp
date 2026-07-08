#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
       vector<int> v;
       vector<int> v1;
       for(int i=0;i<n;i++){
           if(s[i]=='0')v.push_back(i);
           else v1.push_back(i);
       }
       if(v1.size()%2==0){
        cout<<v1.size()<<endl;
        for(int x:v1)cout<<x+1<<" ";
        cout<<endl;
       }
       else if(v.size()%2==1){
        cout<<v.size()<<endl;
        for(int x:v)cout<<x+1<<" ";
        cout<<endl;
       }
       else cout<<-1<<endl;
    }
    return 0;
}1