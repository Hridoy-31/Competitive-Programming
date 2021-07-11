#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s,x;
	cin >> s;
	int res = 0;
	map <string, int> mp;
	for (int i=0; i<n-1; i++) {
		mp[s.substr(i,2)]++;
		if (mp[s.substr(i,2)] > res) {
			res = mp[s.substr(i,2)];
			x = s.substr(i,2);
		}
	}
	cout << x << endl;
	return 0;
}
		
