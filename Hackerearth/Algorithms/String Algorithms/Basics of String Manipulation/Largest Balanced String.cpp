#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int a[6] = {0};
		for (int i=0; i<s.size(); i++) {
			if (s[i]=='(') {
				a[0]++;
			}
			else if (s[i]==')') {
				a[1]++;
			}
			else if (s[i]=='{') {
				a[2]++;
			}
			else if (s[i]=='}') {
				a[3]++;
			}
			else if (s[i]=='[') {
				a[4]++;
			}
			else if (s[i]==']') {
				a[5]++;
			}
		}
		int count = 0;
		for (int i=0; i<6; i+=2) {
			if (a[i]>a[i+1]) {
				count = count + a[i+1]*2;
			}
			else {
				count = count + a[i]*2;
			}
		}
		cout << count << endl;
	}
	return 0;
}
