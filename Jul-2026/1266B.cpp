#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        if (x < 15) {
            cout << "NO\n";
            continue;
        }
        long long rem = x % 14;

        if (rem >= 1 && rem <= 6)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}