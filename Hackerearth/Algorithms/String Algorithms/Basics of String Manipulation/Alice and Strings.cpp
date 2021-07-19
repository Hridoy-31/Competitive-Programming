#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	bool flag = true;
	if (s1.size() != s2.size()) {
		flag = false;
	}
	else {
		for (int i=0; i<s1.size(); i++) {
			if (s1[i] > s2[i] && s1[i]=='z') {
				flag = false;
			}
		}
	}
	if (flag == true) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}
			
