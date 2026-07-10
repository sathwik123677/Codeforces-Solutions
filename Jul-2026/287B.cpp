#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    if (n == 1) {
        cout << 0 << '\n';
        return 0;
    }

    // Maximum possible pipes
    long long mx = 1 + (k - 1) * k / 2;

    if (mx < n) {
        cout << -1 << '\n';
        return 0;
    }

    long long need = n - 1;

    long long lo = 1, hi = k - 1;
    long long ans = k - 1;

    while (lo <= hi) {
        long long mid = (lo + hi) / 2;

        // Sum of the largest 'mid' increases:
        // (k-1) + (k-2) + ... + (k-mid)
        long long sum = mid * (2 * (k - 1) - (mid - 1)) / 2;

        if (sum >= need) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}