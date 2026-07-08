#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n*(n-1)/2);
        for (int i = 0; i <(n*(n-1)/2); i++) {
            cin >> b[i];
        }
        sort(b.begin(),b.end());
        int x=n-1;
        int i=0;
        while (x>0) {
			cout<<b[i]<<" ";
			i+=x;
			x--;
		}
		cout << "1000000000\n";
    }
    return 0;
}