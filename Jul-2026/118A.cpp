#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    string ans;
    for (char c : s) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' ||  c == 'o' || c == 'u' || c == 'y')  continue;
        ans += '.';
        ans += c;
    }
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}