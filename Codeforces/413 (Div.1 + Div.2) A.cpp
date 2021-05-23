#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,k,d;
	cin >> n >> t >> k >> d;
	int curr = 0;
	while (curr <= d) {
		n = n - k;
		curr = curr + t;
	}
	if (n > 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}
