#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;

        if (b >= 2 * a)
            cout << (x + y) * a << '\n';
        else
            cout << min(x, y) * b + abs(x - y) * a << '\n';
    }

    return 0;
}