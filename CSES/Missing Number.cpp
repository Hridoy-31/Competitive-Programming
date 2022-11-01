#include <bits/stdc++.h>
// #include "debugging.h"
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    ll n;
    cin >> n;
    ll s = 0;
    for (int i=0; i<n-1; i++) {
        ll x;
        cin >> x;
        s += x;
    }
    cout << (n*(n+1))/2 - s << endl;
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
