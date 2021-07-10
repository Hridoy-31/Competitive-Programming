#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int flag = 0;
	for (int i=0; i<s.size(); i++) {
		if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
			i = i + 2;
			if (flag == 1) {
				cout << " ";
			}
		}
		else {
			flag = 1;
			cout << s[i];
		}
	}
	return 0;
}
