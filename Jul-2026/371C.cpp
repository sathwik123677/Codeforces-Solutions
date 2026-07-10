#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string recipe;
    cin >> recipe;

    int cntB = 0, cntS = 0, cntC = 0;
    for (char ch : recipe) {
        if (ch == 'B') cntB++;
        else if (ch == 'S') cntS++;
        else cntC++;
    }

    int nb, ns, nc;
    cin >> nb >> ns >> nc;

    int pb, ps, pc;
    cin >> pb >> ps >> pc;

    int r;
    cin >> r;

    auto possible = [&](int x) {
        int needB = max(0LL, cntB * x - nb);
        int needS = max(0LL, cntS * x - ns);
        int needC = max(0LL, cntC * x - nc);

        long long cost = 1LL * needB * pb +
                         1LL * needS * ps +
                         1LL * needC * pc;

        return cost <= r;
    };

    int lo = 0, hi = 1e13;
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