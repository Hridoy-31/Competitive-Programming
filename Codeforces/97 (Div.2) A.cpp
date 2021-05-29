#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x;
	int a[n];
	for (int i=1; i<=n; i++) {
		cin >> x;
		a[x-1] = i;
	}
	for (int i=1; i<=n; i++) {
		cout << a[i-1] << " ";
	}
	cout << endl;
	return 0;
}
