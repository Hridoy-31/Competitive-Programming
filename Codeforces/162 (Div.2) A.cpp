#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1;
	cin >> s;
	cin >> s1;
	int c = 0;
	int curr = 0;
	for (int i=0; i<s1.size(); i++) {
		if (s1[i] == s[curr]) {
			c++;
			curr++;
		}
	}
	cout << c+1 << endl;
	return 0;
}
