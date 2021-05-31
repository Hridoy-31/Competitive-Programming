#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	int c = 0;
	for (int i=0; i<min(s1.size(), s2.size()); i++) {
		if (s1[i] == s2[i]) {
			c++;
		}
	}
	if (max(s1.size(),s2.size()) == c) {
		cout << -1 << endl;
	}
	else {
		cout << max(s1.size(),s2.size()) << endl;
	}
	return 0;
}
