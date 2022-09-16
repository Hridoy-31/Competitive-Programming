#include <bits/stdc++.h>
// #include "debugging.h"

using namespace std;
using ll = long long int;

ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}

void solve() {
    int n,m;
    cin >> n >> m;
    char a[n][m];
    char b[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
     for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            b[i][j] = '.';
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j] == '#') {
                b[i][j] = b[i][j+1] = b[i+1][j] = b[i+1][j+1] = '#';
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << b[i][j];
        }
        cout << endl;
    }
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
