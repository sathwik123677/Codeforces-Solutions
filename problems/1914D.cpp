#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<pair<int,int>> a(n), b(n), c(n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i].first;
            b[i].second = i;
        }
        for(int i = 0; i < n; i++){
            cin >> c[i].first;
            c[i].second = i;
        }
        
        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());
        sort(c.begin(), c.end(), greater<>());
        
        long long ans = 0;
        
        for(int i = 0; i < min(3,n); i++){
            for(int j = 0; j < min(3,n); j++){
                for(int k = 0; k < min(3,n); k++){
                    
                    int idxA = a[i].second;
                    int idxB = b[j].second;
                    int idxC = c[k].second;
                    
                    if(idxA == idxB || idxB == idxC || idxA == idxC)
                        continue;
                    long long sum = 
                        (long long)a[i].first + 
                        b[j].first + 
                        c[k].first;           
                    ans = max(ans, sum);
                }
            }
        }
    cout<<ans<<"\n";
    }
}
