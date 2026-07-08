#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        string s, t;
        cin >> s >> t;

        vector<int> freq(26, 0);
        for (char c : t) freq[c - 'A']++;

        int j = t.size() - 1;
        bool ok = true;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (j >= 0 && s[i] == t[j]) {
                freq[s[i] - 'A']--;
                j--;
            } else {
                if (freq[s[i] - 'A'] > 0) {
                    ok = false;
                    break;
                }
            }
        }

        if (ok && j < 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
