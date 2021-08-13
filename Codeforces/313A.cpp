#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1,s2;
	cin >> s;
	if (s[0] != '-') {
		cout << s << endl;
	} 
	else {
		for (int i=0; i<s.size()-1; i++) {
			s1.push_back(s[i]);
		}
		for (int i=0; i<s.size(); i++) {
			if (i == s.size()-2) {
				continue;
			}
			s2.push_back(s[i]);
		}
		if (s1.compare(s2) < 0) {
			if (s1[0]=='-' && s1[1]=='0' && s1.size()==2) {
				cout << 0 << endl;
			}
			else {
				cout << s1 << endl;
			}
			
		}
		else {
			if (s2[0]=='-' && s2[1]=='0' && s2.size()==2) {
				cout << 0 << endl;
			}
			else {
				cout << s2 << endl;
			}
			
		}
	}
	return 0;
}
