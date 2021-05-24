#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main()
{
	ll n,x;
	cin >> n >> x;
	ll tot = x;
	ll d = 0;
	char type;
	ll c;
	for (int i=0; i<n; i++) {
		cin >> type >> c;
		if (type == '+') {
			tot = tot + c;
		}
		else {
			if ((tot - c) >= 0) {
				tot = tot - c;
			}
			else {
				d++;
			}
		}
	}
	cout << tot << " " << d << endl;
	return 0;
}
