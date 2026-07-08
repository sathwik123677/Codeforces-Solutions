#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    priority_queue<int> pq;

    for (int i = 0; i < 31; i++) {
        if (n & (1 << i))
            pq.push(1 << i);
    }

    if (pq.size() > k || k > n) {
        cout << "NO\n";
        return 0;
    }

    while (pq.size() < k) {
        int x = pq.top();
        pq.pop();

        pq.push(x / 2);
        pq.push(x / 2);
    }

    cout << "YES\n";

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}