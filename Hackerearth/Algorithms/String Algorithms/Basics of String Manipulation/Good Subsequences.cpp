#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		ll a[26] = {0};
		ll ans = 1;
		for (int i=0; i<s.size(); i++) {
			a[s[i] - 'a']++;
		}
		for (int i=0; i<26; i++) {
			if (a[i] > 0) {
				ans = ((ans%MOD)*(a[i]%MOD))%MOD;
			}
		}
		cout << ans % MOD << endl;
	}
	return 0;
}
