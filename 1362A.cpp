#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long a, b;
		cin >> a >> b; // Read the initial and target values for each test case
		long long ra = a;
		long long rb = b;

		// Reduce a and b by continuously dividing by 2 until they are odd
		while (ra % 2 == 0) // This loop reduces a to its odd component
			ra /= 2;
		while (rb % 2 == 0) // This loop reduces b to its odd component
			rb /= 2;

		// If the odd components of a and b are not equal, it's impossible to transform a to b
		if (ra != rb)
			cout << -1 << endl;
		else
		{
			// Normalize a and b by their odd components
			a /= ra;
			b /= rb;

			// Calculate the number of times a and b have been divided by 2
			a = log2(a); // x: number of times a was divided by 2
			b = log2(b); // y: number of times b was divided by 2

			// Calculate the minimum number of operations needed
			long long ans = ceil(abs(a - b) / 3.0);
			cout << ans << endl; // Output the result for the current test case
		}
	}
	return 0;
}

// Time Complexity (TC): O(log2(10^18)) = O(60)
// Space Complexity (SC): O(1)
