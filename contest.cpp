#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
         int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int p;
    cin >> p;
    p--; 
    int L = 0, R = 0;
    for (int i = 0; i < p; i++) {
        if (a[i] != a[p] && (i == 0 || a[i] != a[i - 1])) {
            L++;
        }
    }
    for (int i = p + 1; i < n; i++) {
        if (a[i] != a[p] && (i == n - 1 || a[i] != a[i + 1])) {
            R++;
        }
    }
    cout << 2 * max(L, R) << endl;
    }
    return 0;
}