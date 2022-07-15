#include <bits/stdc++.h>
// #include "debugging.h"

using namespace std;
using ll = long long int;

ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}

void solve() {
    char c,a;
    cin >> c;
    if (c>=65 and c<=90) {
        cout << 'A' << endl;
    }
    else {
        cout << 'a' << endl;
    }
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
