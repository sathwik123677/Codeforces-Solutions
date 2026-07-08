#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long sum = a[0];
        long long ans = a[0];

        for (int i = 1; i < n; i++) {
            if ((a[i] & 1) == (a[i - 1] & 1)) {
                sum = a[i];
            } else {
                sum = max((long long)a[i], sum + a[i]);
            }
            ans = max(ans, sum);
        }

        cout << ans << '\n';
    }
    return 0;
}
