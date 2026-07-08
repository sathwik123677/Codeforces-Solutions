#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        long long n; // Length of the array
        cin >> n;
        vector<long long> a(n); // Array to store the elements
        for (int i = 0; i < n; i++) // Loop to input elements into the array
            cin >> a[i];
        

        int flag = 0;
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                
                if (__gcd(a[i], a[j]) <= 2) 
                {
                    flag = 1; 
                }
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
