#include <bits/stdc++.h>
using namespace std;
#define int long long
main() 
{
	int t;
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		int a[n+2];
		a[0]=0, a[n+1]=0;
		for (int i=1; i<=n; i++) {
			cin >> a[i];
		}
        int tot = 0;
		for (int i=1; i <=n; i++) {
			if (a[i] > max(a[i+1], a[i-1])) {
                tot = tot + a[i] - max(a[i+1], a[i-1]);
				a[i] =  max (a[i+1], a[i-1]);
                
			}
		}
		for (int i=1; i<=n+1; i++) {
			tot = abs(a[i] - a[i-1]) + tot;
		}
		cout << tot << endl;
	}
	return 0;
}
