#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;
        int k = r / (b + 1);
        int rem = r % (b + 1);
        string s="";
        for (int i = 1; i <= b + 1; i++) {
            for (int j = 0; j < k; j++) {
                s += 'R';
            }
            if (rem > 0) {
                s += 'R';
                rem--;
            }
            if (i != b+1) {
                s += 'B';
            }
        }
        cout << s << "\n";
    }
    return 0;
}