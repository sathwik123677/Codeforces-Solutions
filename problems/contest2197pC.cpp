#include<iostream>
using namespace std;
void solve(){
    long long p,q;
    cin>>p>>q;

    unsigned __int128 P = p;
    unsigned __int128 Q = q;

    if (p%2==0&&q%2==0&&p<=q&&(3*P>=2*Q)) {
        cout<<"Bob\n";
    } else {
        cout<<"Alice\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}