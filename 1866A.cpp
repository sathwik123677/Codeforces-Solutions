#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long n; 
        cin >> n;
        vector<long long> a(n);
        long long x=LLONG_MAX;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            x=min(x,abs(a[i]));
        }
        cout<<x<<endl;
    return 0;
}