#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main()
{
	ll n,b,d;
	cin >> n >> b >> d;
	ll ans = 0;
	ll a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	ll c = 0;
	for (int i=0; i<n; i++) {
		if (a[i] <= b) {
			c = c+a[i];
		}
		if (c > d) {
			ans++;
			c = 0;
		}
	}
	cout << ans << endl;
	return 0;
}
