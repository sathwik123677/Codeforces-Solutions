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

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) cnt++;
        }

        if (n % 2) {
            cout << "NO\n";
        } else {
            cout << (cnt % 2 == (n / 2) % 2 ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}