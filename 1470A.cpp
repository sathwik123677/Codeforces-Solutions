#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> k(n);
        for (int i = 0; i < n; i++)
            cin >> k[i];

        vector<long long> c(m);
        for (int i = 0; i < m; i++)
            cin >> c[i];

        sort(k.rbegin(), k.rend());

        long long ans = 0;
        int ptr = 0;

        for (int i = 0; i < n; i++) {
            if (ptr < m && ptr < k[i]) {
                ans += min(c[ptr], c[k[i] - 1]);
                if (c[ptr] < c[k[i] - 1])
                    ptr++;
            } else {
                ans += c[k[i] - 1];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}