#include <bits/stdc++.h>
#define END 1ll*(1e3+10)
// #define ll long long int
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int a,b;
		cin >> a >> b;
		long long int result = 1ll + a;

		for (long long int k=0; k<END; k++) {
			if ((k == 0) && (b == 1ll)) {
				continue;
			}
			long long int ver = k;
			long long int hor = a;
			while (hor != 0) {
                hor /= (k+b);
				ver++;
			}
			result = min(result, ver);
		}
		cout << result << endl;
	}
	return 0;
}
