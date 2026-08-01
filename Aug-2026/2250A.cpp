#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> w(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> w[i];

        if (n & 1) {
            cout << "NO\n";
            continue;
        }

        long long mxEven = 0;
        long long mnOdd = LLONG_MAX;

        for (int i = 1; i <= n; i++) {
            if (i & 1)
                mnOdd = min(mnOdd, w[i]);
            else
                mxEven = max(mxEven, w[i]);
        }

        if (mxEven + 1 < mnOdd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}