#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n,a,b;
		cin >> n >> a >> b;
		vector <char> v(n,'a');
		for (int i=0; i<n; i++) {
			v[i] = (char)(97+(i%b));
		}
		for (auto a : v) {
			cout << a;
		}
		cout << endl;
	}
	return 0;
}
