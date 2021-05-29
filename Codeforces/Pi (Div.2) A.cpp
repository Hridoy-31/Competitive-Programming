#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main()
{
	int n;
	cin >> n;
	ll a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	for (int i=0; i<n; i++) {
		if (i == 0) {
			cout << abs(a[i]-a[i+1]) << " " << abs(a[i]-a[n-1]) << endl;
		}
		else if (i != n-1) {
			cout << min(abs(a[i-1]-a[i]), abs(a[i]-a[i+1])) << " " << max(abs(a[i]-a[0]), abs(a[i]-a[n-1])) << endl;
		}
		else {
			cout << abs(a[i]-a[i-1]) << " " << abs(a[i]-a[0]) << endl;
		}
	}
	return 0;
}
