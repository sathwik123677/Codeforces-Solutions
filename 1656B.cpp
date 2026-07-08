#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        bool ok = false;
        for(int i = 0; i < n; i++){
            long long need = a[i] - k;
            if(binary_search(a.begin(), a.end(), need)){
                if(k != 0 ||   (lower_bound(a.begin(), a.end(), a[i]) + 1 !=   upper_bound(a.begin(), a.end(), a[i]))){
                    ok = true;
                    break;
                }
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
