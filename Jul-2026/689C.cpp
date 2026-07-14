#include <bits/stdc++.h>
using namespace std;

#define int long long

int countWays(int n) {
    int ways = 0;

    for (int k = 2; k * k * k <= n; k++) {
        ways += n / (k * k * k);
    }

    return ways;
}

signed main() {
    int m;
    cin >> m;

    int l = 1, r = 1e18;
    int ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (countWays(mid) >= m) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    if (ans == -1 || countWays(ans) != m)
        cout << -1;
    else
        cout << ans;

    return 0;
}