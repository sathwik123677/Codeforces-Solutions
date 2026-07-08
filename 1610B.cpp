#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> &a,int x){
    int i=0;
    int j=a.size()-1;
    while(i<j){
        if(a[i]==x){
            i++;
        }
        else if(a[j]==x){
            j--;
        }
        else if(a[i]!=a[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0;
        int r=n-1;
        bool ok=true;
        while(l<r){
            if(a[l]==a[r]){
                l++;
                r--;
            }
            else{
                ok=(check(a,a[l]) || check(a,a[r]));
                break;
            }
        }
        if(ok){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}