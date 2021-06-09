#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int low,high;
	int a[n];
	int mini = INT_MAX, maxi = INT_MIN;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		if (a[i] <= mini) {
			mini = a[i];
			low = i;
		}
		if (a[i] > maxi) {
			maxi = a[i];
			high = i;
		}
	}
	if (low < high) {
		cout << n-low+high-2 << endl;
	}
	else {
		cout << n-low+high-1 << endl;
	}
	
	return 0;
}
