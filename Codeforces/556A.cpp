#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <char> v(n);
	int c0=0, c1=0;
	for (int i=0; i<n; i++) {
		cin >> v[i];
		if (v[i]=='0') {
			c0++;
		}
		else {
			c1++;
		}
	}
	cout << abs(c0 - c1) << endl;

	return 0;
}
