#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin >> t;
	while (t--) {
		ll n,h;
		ll c=0;
		cin >> n >> h;
		ll a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		sort (a,a+n,greater<ll>());
		c = 2*(h/(a[0]+a[1]));
		if (h%(a[0]+a[1])==0) {
			c+=0;
		}
		else if (h%(a[0]+a[1])<=a[0]) {
			c++;
		}
		else {
			c+=2;
		}
		cout << c << endl;
	}
	return 0;
}
