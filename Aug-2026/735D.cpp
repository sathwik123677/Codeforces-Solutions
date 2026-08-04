#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

bool isPrime(int64 x) {
    if (x < 2) return false;
    if (x % 2 == 0) return x == 2;
    for (int64 i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 n;
    cin >> n;

    if (isPrime(n)) {
        cout << 1 << '\n';
    } 
    else if (n % 2 == 0) {
        cout << 2 << '\n';
    } 
    else if (isPrime(n - 2)) {
        cout << 2 << '\n';
    } 
    else {
        cout << 3 << '\n';
    }

    return 0;
}