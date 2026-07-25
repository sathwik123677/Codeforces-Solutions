#include <bits/stdc++.h>
using namespace std;

bool solve(int idx, int sum, vector<int>& a) {
   if(idx == a.size()) return sum % 360 == 0;
   return solve(idx + 1, sum + a[idx], a) || solve(idx + 1, sum - a[idx], a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (solve(0, 0, a))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}