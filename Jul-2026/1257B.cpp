#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        if (x >= 4)
            cout << "YES\n";
        else if (x == 1)
            cout << (y == 1 ? "YES" : "NO") << '\n';
        else
            cout << (y <= 3 ? "YES" : "NO") << '\n';
    }

    return 0;
}