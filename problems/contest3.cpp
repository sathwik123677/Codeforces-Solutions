#include <iostream>
#include <numeric>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m, a, b;
    cin >> n >> m >> a >> b;
    if (gcd(n, a) == 1 && gcd(m, b) == 1 && gcd(n, m) <= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
    return 0;
}