#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

struct Matrix {
    long long a[2][2];

    Matrix() {
        memset(a, 0, sizeof(a));
    }
};

Matrix multiply(Matrix x, Matrix y) {
    Matrix res;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                res.a[i][j] = (res.a[i][j] + x.a[i][k] * y.a[k][j]) % MOD;
            }
        }
    }
    return res;
}

Matrix power(Matrix base, long long exp) {
    Matrix res;
    res.a[0][0] = res.a[1][1] = 1;

    while (exp) {
        if (exp & 1)
            res = multiply(res, base);
        base = multiply(base, base);
        exp >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    Matrix trans;
    trans.a[0][0] = 3;
    trans.a[0][1] = 1;
    trans.a[1][0] = 1;
    trans.a[1][1] = 3;

    Matrix ans = power(trans, n);

    // Initial vector = [1, 0]
    cout << ans.a[0][0] << '\n';

    return 0;
}