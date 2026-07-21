
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    vector<int> c(b + 1, 0);
    for (int i = 0; i < a; ++i) {
        int d;
        cin >> d;
        c[d]++;
    }
    int e = (a + 1) / 2;
    int f = 0;
    int g = 0;
    for (int i = 1; i <= b; ++i) {
        int h = c[i] / 2;
        int j = min(h, e);
        f += j * 2;
        e -= j;
        c[i] %= 2;
        if (c[i] == 1) {
            g++;
        }
    }
    if (e > 0) {
        f += min(g, e);
    }
    cout << f << "\n";
    return 0;
}