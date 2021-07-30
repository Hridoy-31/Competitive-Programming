#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		string s,st,ss,sr;
		cin >> s;
		for (int i=0; i<s.size(); i++) {
			if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
				st.push_back(s[i]);
			}
		}
		ss = st;
		sr = st;
		sort(ss.begin(), ss.end());
		sort(sr.begin(), sr.end(), greater <int> ());
		if (ss.compare(st)==0) {
			cout << "Good" << endl;
		}
		else if (sr.compare(st)==0) {
			cout << "Worst" << endl;
		}
		else {
			cout << "Bad" << endl;
		}
	}
	return 0;
}
