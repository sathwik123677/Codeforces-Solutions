#include <bits/stdc++.h>
using namespace std;

#define int long long

bool check(vector<int>& a, int k, int h) {
    int dmg = 0;

    for (int i = 0; i < a.size() - 1; i++) {
        dmg += min(k, a[i + 1] - a[i]);
        if (dmg >= h) return true;
    }

    dmg += k;
    return dmg >= h;
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n, h;
        cin >> n >> h;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 1, r = 1e18, ans = r;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (check(a, mid, h)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << "\n";
    }
}