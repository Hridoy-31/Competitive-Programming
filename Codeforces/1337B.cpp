#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int x,n,m;
		cin >> x >> n >> m;
		int px = x;
		for (int i=0; i<n; i++) {
			x = (x/2)+10;
			if (x > px) {
				x = px;
				break;
			}
		}
		for (int i=0; i<m; i++) {
			x -= 10;
		}
		if (x <= 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
