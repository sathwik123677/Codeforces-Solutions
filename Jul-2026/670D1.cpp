#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    auto possible = [&](int x) {
        long long need = 0;

        for (int i = 0; i < n; i++) {
            need += max(0LL, a[i] * x - b[i]);
            if (need > k) return false;
        }

        return true;
    };

    int lo = 0, hi = 2e9;
    int ans = 0;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (possible(mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}