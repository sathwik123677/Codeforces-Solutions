#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> C;
    vector<int> S;
    for (int i = 0; i < n; i++) {
        if (C.empty() || C.back() != a[i]) {
            C.push_back(a[i]);
            S.push_back(1);
        } else {
            S.back()++;
        }
    }
    int L = C.size();
    int ans = L;
    bool can2 = false;
    for (int i = 0; i < L - 1; i++) {
        if (S[i] >= 2 && S[i + 1] >= 2) {
            can2 = true;
            break;
        }
    }
    if (can2) {
        ans = L + 2;
    } else {
        bool can1 = false;
        for (int i = 0; i < L; i++) {
            if (S[i] >= 2) {
                if (i < L - 1 && (i + 2 >= L || C[i] != C[i + 2])) {
                    can1 = true;
                    break;
                }
                if (i > 0 && (i - 2 < 0 || C[i] != C[i - 2])) {
                    can1 = true;
                    break;
                }
            }
        }
        if (can1) ans = L + 1;
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int TestsNumT;
    if (cin >> TestsNumT) {
        while (TestsNumT--) {
            solve();
        }
    }
    return 0;
}