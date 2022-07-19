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
    vector <ll> r;
    for (int i=0; i<n; i++) {
        ll x;
        cin >> x;
        r.push_back(x);
    }
    ll check = 0;
    ll sum = 0;
    while (check<n and r[check]==0) {
        check++;
    }
    for (int i=check; i<n-1; i++) {
        sum += r[i];
        if (r[i]==0) {
            sum++;
        }
    }
    cout << sum << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
