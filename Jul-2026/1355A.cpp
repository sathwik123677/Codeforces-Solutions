#include <bits/stdc++.h>
using namespace std;
pair<long long, long long> getDigits(long long x) {
    long long mn = 9, mx = 0;
    while (x) {
        int d = x % 10;
        mn = min(mn, (long long)d);
        mx = max(mx, (long long)d);
        x /= 10;
    }
    return {mn, mx};
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, k;
        cin >> a >> k;

        for (long long i = 1; i < k; i++) {
            pair<long long, long long> p = getDigits(a);
            long long mn = p.first;
            long long mx = p.second;

            if (mn == 0)
                break;

            a += mn * mx;
        }

        cout << a << '\n';
    }
    return 0;
}