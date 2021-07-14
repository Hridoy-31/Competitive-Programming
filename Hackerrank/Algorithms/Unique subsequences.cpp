#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int l;
		cin >> l;
		string s;
		cin >> s;
		int c = 0;
		for (int i=0; i<l-1; i++) {
			if (s[i] == s[i+1]) {
				continue;
			}
			else {
				c++;
			}
		}
		cout << c+1 << endl;
	}
	return 0;
}
