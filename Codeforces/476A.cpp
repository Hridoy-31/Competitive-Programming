#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	if (m>n) {
		cout << -1 << endl;
	}
	else {
		int x;
		if (n%2==0) {
			x = n/2;
		}
		else {
			x=(n/2)+1;
		}
		while (x%m!=0) {
			x++;
		}
		cout << x << endl;
	}
	return 0;
}
