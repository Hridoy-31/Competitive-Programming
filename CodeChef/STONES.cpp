#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s1,s2;
		cin >> s1 >> s2;
		int c = 0;
		for (int i=0; i<s2.size(); i++) {
			for (int j=0; j<s1.size(); j++) {
				if (s2[i] == s1[j]) {
					c++;
					break;
				}
			}
		}
		cout << c << endl;
	}
	return 0;
}
