#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long h;
    cin >> n >> h;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Binary search boundaries
    long long left = 1, right = h;
    long long ans = h;
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long current_damage = 0;
        
        // Calculate damage for current k = mid
        for (int i = 0; i < n - 1; i++) {
            // The poison lasts either the full 'mid' seconds or until the next attack
            current_damage += min(mid, a[i+1] - a[i]);
        }
        
        // The last attack always applies poison for the full 'mid' seconds
        current_damage += mid;
        
        if (current_damage >= h) {
            ans = mid;           // 'mid' is sufficient, record it
            right = mid - 1;     // try to find a smaller valid k
        } else {
            left = mid + 1;      // 'mid' is too small, we need a larger k
        }
    }
    
    cout << ans << "\n";
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}