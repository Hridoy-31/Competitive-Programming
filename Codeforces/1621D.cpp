#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[2*n][2*n];
        for (int i=0; i<2*n; i++) {
            for (int j=0; j<2*n; j++) {
                cin >> a[i][j];
            }
        }
        ll sum = 0;
        for (int i=n; i<2*n; i++) {
            for (int j=n; j<2*n; j++) {
                sum = sum + a[i][j];
            }
        }
        ll mn = 1e9 + 1;
        mn = min(mn, a[n][0]);
        mn = min(mn, a[n][n-1]);
        mn = min(mn, a[2*n - 1][0]);
        mn = min(mn,a[2*n - 1][n-1]);
        mn = min(mn, a[0][n]);
        mn = min(mn, a[n-1][n]);
        mn = min(mn, a[0][2*n - 1]);
        mn = min(mn, a[n-1][2*n - 1]);
        cout << sum + mn << endl;
    }
    return 0;
}
