#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        long long ans=1e18;
        for(int i=0;i<32;i++){
            long long opr=i;
            long long new_b=b+i;
            long long new_a=a;
            if(new_b==1) continue;
            while(new_a>0){
                new_a=new_a/(new_b);
                opr++;
            }
            ans=min(ans,opr);
        }
        cout << ans << "\n";
    }
    return 0;
}