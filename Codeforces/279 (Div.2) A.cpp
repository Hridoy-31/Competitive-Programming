#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	vector <int> c1, c2, c3;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			c1.push_back(i);
		}
		else if (a[i] == 2) {
			c2.push_back(i);
		}
		else {
			c3.push_back(i);
		}
	}
	int x = min(min(c1.size(), c2.size()), c3.size());
	cout << x << endl;
	
	for (int i=0; i<x; i++) {
		cout << c1[i]+1 << " " << c2[i]+1 << " " << c3[i]+1 << endl;
	}
	return 0;
} 
