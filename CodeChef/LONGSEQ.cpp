#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s1;
		cin >> s1;
		int c1=0, c0=0;
		string s2(s1.size(), '1');
		string s3(s1.size(), '0');
		for (int i=0; i<s1.size(); i++) {
			if (s1[i] != s2[i]) {
				c1++;
			}
		} 
		for (int i=0; i<s1.size(); i++) {
			if (s1[i] != s3[i]) {
				c0++;
			}
		}
		if (c1 == 1 || c0 == 1) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	
	return 0;
}
		
