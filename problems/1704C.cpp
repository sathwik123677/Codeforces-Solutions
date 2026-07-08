#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<int> b;
        for (int i = 0; i < m - 1; i++) {
            b.push_back(a[i + 1] - a[i] - 1);
        }

        b.push_back(a[0] + n - a[m - 1] - 1);

        sort(b.rbegin(), b.rend());

        int ans = 0, z = 0;

        for (auto x : b) {
            int y = x - 2 * z;

            if (y <= 0) continue;

            ans++;      // save one house
            y -= 2;

            if (y > 0)
                ans += y;

            z += 2;
        }
        cout << n - ans << "\n";
    }

    return 0;
}