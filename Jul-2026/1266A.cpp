#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sum = 0;
        int zero = 0;
        int even = 0;
        for (char c : s) {
            int d = c - '0';
            sum += d;
            if (d == 0)  zero++;
            if (d % 2 == 0)even++;
        }
        if (zero >= 1 && even >= 2 && sum % 3 == 0)  cout << "red\n";
        else cout << "cyan\n";
    }
    return 0;
}