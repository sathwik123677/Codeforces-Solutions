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

        if (x >= y)
            cout << "YES\n";
        else if (x >= 4)
            cout << "YES\n";
        else if (y <= 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}