#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,d;
	cin >> n >> d;
	int a[n];
	long long sum=0,sum1=0;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sum1 = sum + (n-1)*10;
	if (sum1 > d) {
		cout << -1 << endl;
	}
	else {
		int rem = d - sum;
		cout << (rem/5) << endl;
	}
	return 0;
}
