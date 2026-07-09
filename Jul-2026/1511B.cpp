#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int g = 1;
        for (int i = 1; i < c; i++) g *= 10;

        int x = g;
        for (int i = 0; i < a - c; i++) x *= 10;

        int y = 1;
        for (int i = 0; i < b - c; i++) y *= 10;
        y = g * (y + 1);

        cout << x << " " << y << '\n';
    }
}