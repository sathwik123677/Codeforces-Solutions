#include <iostream>
#include <vector>
using namespace std;
const int MAXN = 200005;
bool is[MAXN];

void sieve() {
    fill(is,is+MAXN,true);
    is[0] = is[1] = false;
    for (int i=2;i*i<MAXN;i++) {
        if (is[i]) {
            for (int j=i*i;j<MAXN;j+=i) {
                is[j] = false;
            }
        }
    }
}
void solve() {
    int n;
    cin >> n;
    if (is[n + 1]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}