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
        int op=INT_MAX;
        if(n <= 1){
            cout << 0 << endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(a[i]<=a[i+1]) {
                int diff=a[i+1]-a[i];
                op=min(op,diff/2+1);
            }
            else {
                op=0;
                break;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}