#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    int lo = 1;
    int hi = n * m;
    int ans = hi;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        long long cnt = 0;

        for (int i = 1; i <= n; i++) {
            cnt += min(m, mid / i);
        }

        if (cnt >= k) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}