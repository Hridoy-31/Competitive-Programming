#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	cin >> k;
	int a[12];
	for (int i=0; i<12; i++) {
		cin >> a[i];
	}
	sort(a,a+12,greater<int>());
	int sum=0,c=0;
	for (int i=0; i<12; i++) {
		if (sum >= k) {
			break;
		}
		else {
			sum += a[i];
			c++;
		}
	}
	if (sum < k) {
		cout << -1 << endl;
	}
	else {
		cout << c << endl;
	}
	return 0;
}
