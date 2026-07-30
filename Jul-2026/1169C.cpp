#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto check = [&](int x) {
        int last = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] + x < m) {
                // No wrap possible
                if (a[i] + x < last)
                    return false;
                last = max(last, a[i]);
            } else {
                // Wrap possible
                int mx = (a[i] + x) % m;

                // Can keep last?
                if (last <= mx) {
                    continue;
                } else {
                    last = max(last, a[i]);
                }
            }
        }

        return true;
    };

    int lo = 0, hi = m - 1, ans = m - 1;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;

        if (check(mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}