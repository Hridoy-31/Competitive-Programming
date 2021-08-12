#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		ll sum = 0;
		for (int i=0; i<n-1; i++) {
			sum = sum + a[i];
		}
		cout << setprecision(10);
		cout << fixed;
		cout << 1.0 * sum/(n-1) + a[n-1] << endl;
	}
	return 0;
}
