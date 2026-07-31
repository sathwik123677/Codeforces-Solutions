#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x, y, z;
    cin >> x >> y >> z;

    long long before = x / z + y / z;
    long long after = (x + y) / z;

    if (before == after) {
        cout << after << " " << 0 << "\n";
        return 0;
    }

    long long ans = LLONG_MAX;

    if (x % z != 0)
        ans = min(ans, z - (x % z));

    if (y % z != 0)
        ans = min(ans, z - (y % z));

    cout << after << " " << ans << "\n";
    return 0;
}