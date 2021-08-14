#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll p = __builtin_popcountll(n);
		if (p == 1) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
