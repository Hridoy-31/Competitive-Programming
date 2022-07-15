#include <bits/stdc++.h>
// #include "debugging.h"

using namespace std;
using ll = long long int;

ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}

void solve() {
    int n;
    cin >> n;
    cout << !n << endl;
}

int main()
{
    ll t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
