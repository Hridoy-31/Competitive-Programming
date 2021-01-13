#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int add = 0;
		for (int i=0; i<n; i++) {
			
			if (i < 3) {
				cout << 9 - (i%2);
			}
			else {
				cout << add++ % 10;
			}
		}
		cout << endl;
	}
	
	return 0;
}
