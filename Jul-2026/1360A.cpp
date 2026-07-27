#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long side = min(max(2 * a, b), max(a, 2 * b));
        cout << side * side << "\n";
    }

    return 0;
}