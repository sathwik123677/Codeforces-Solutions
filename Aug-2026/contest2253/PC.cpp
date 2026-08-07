#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Elem {
    int val;
    int type;
};

bool cmp(const Elem& u, const Elem& v) {
    return u.val > v.val;
}

void solve() {
    int n, m, x, y;
    if (!(cin >> n >> m >> x >> y)) return;
    vector<int> a(x), b(y);
    int mx = n + m;
    vector<int> in_a(mx + 1, 0), in_b(mx + 1, 0);
    for (int i = 0; i < x; i++) {
        cin >> a[i];
        if (a[i] <= mx) in_a[a[i]] = 1;
    }
    for (int i = 0; i < y; i++) {
        cin >> b[i];
        if (b[i] <= mx) in_b[b[i]] = 1;
    }
    int r = min(n, x);
    int c = min(m, y);
    int K = r + c - ((r == n && c == m) ? 1 : 0);
    vector<Elem> elems;
    for (int i = 1; i <= mx; i++) {
        if (in_a[i] && in_b[i]) {
            elems.push_back({i, 3});
        } else if (in_a[i]) {
            elems.push_back({i, 1});
        } else if (in_b[i]) {
            elems.push_back({i, 2});
        }
    }
    sort(elems.begin(), elems.end(), cmp);
    long long ans = 0;
    int countA = 0, countB = 0, total_count = 0;
    for (const auto& e : elems) {
        if (total_count == K) break;
        if (e.type == 1) {
            if (countA < r) {
                countA++;
                total_count++;
                ans += e.val;
            }
        } else if (e.type == 2) {
            if (countB < c) {
                countB++;
                total_count++;
                ans += e.val;
            }
        } else {
            total_count++;
            ans += e.val;
        }
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