#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long mx1 = a[n - 1];
    long long mx2 = a[n - 2];
    long long full = m / (k + 1);
    long long rem = m % (k + 1);
    long long cnt1 = full * k + rem;
    long long cnt2 = full;
    cout << cnt1 * mx1 + cnt2 * mx2 << '\n';
    return 0;
}