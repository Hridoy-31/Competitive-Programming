#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s1,s2;
	cin >> s1 >> s2;
	int maxlen = 0;
	for (int i=1; i<n; i++) {
		string temp = s2.substr(0,i);
		if (s1.find(temp) != string::npos) {
			maxlen = max(maxlen, i);
		}
	}
	
	cout << n - maxlen << endl;
	return 0;
}
