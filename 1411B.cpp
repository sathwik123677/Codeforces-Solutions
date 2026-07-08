#include<bits/stdc++.h>
using namespace std;
bool is(long long n){
    long long num=n;
    while(num>0){
        int rem=num%10;
        if( rem!=0 && n%rem!=0)
            return false;
        num/=10;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        while(!is(n)){
            n++;
        }     cout << n << "\n";
    }
    return 0;
}