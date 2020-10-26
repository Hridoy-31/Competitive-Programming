#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,t,j,sum=0;
	cin >> t;

	for (i=0; i<t; i++) {
		cin >> n;
		int a[n];
		int b[n];
		for (j=0; j<n; j++) {
			cin >> a[j];
		}
		for (j=0; j<n; j++) {
			if (j%2 == 0) {
				b[j] = a[j+1];
			}
			else {
				b[j] =(-a[j-1]);
			} 
		}

		for (j=0; j<n; j++) {
			cout << b[j] << ' ';
		}
		cout << endl;
	}

	return 0;
}
