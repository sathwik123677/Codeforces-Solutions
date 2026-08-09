#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code here
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            long long k;
            cin >> n >> k;
            string s;
            cin >> s;
            int len = 2 * n;
            long long red_score = 0, blue_score = 0;
            for (int i = 0; i < len; i++) {
                if (s[i] == '1') {
                    if (i % 2 == 0) {
                        blue_score++;
                    } else {
                        red_score++;
                    }
                }
            }
            for (int i = 0; i < len; i++) {
                if (s[i] == '1' && s[(i + 1) % len] == '0') {
                    if (i % 2 == 0) {
                        red_score++;
                        blue_score--;
                    } else {
                        blue_score++;
                        red_score--;
                    }
                }
            }
            cout << red_score << " " << blue_score << "\n";
        }
    }

    return 0;
}