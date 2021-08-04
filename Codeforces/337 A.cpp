#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int a[m];
	for (int i=0; i<m; i++) {
		cin >> a[i];
	}
	sort(a,a+m);
	int mini = a[m-1]-a[0];
	if (n == m) {
		cout << mini << endl;
	}
	else {
		for (int i=0; i<m-n+1; i++) {
			int temp = a[n-1+i] - a[i];
			if (temp < mini) {
				mini = temp;
			}
		}
		cout << mini << endl;
	}
	
	return 0;
}
