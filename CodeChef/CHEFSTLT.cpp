#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s1, s2;
		cin >> s1 >> s2;
		int x=0, y=0;
		for (int i=0; i<s1.size(); i++) {
			if (s1[i]=='?' || s2[i]=='?') {
				x++;
			}
			else if (s1[i] != s2[i]) {
				y++;
			}
		}
		cout << y << " " << x+y << endl;
		
	}
	return 0;
}
