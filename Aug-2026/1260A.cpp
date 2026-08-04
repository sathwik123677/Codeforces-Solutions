#include <bits/stdc++.h>
using namespace std;
/

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        int64 c, sum;
        cin >> c >> sum;

        int64 k = min(c, sum);

        int64 q = sum / k;
        int64 r = sum % k;

        int64 ans = (k - r) * q * q + r * (q + 1) * (q + 1);

        cout << ans << "\n";
    }
}