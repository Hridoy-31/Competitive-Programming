#include <bits/stdc++.h>
// #include "debugging.h"
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    ll n,x;
    cin >> n >> x;
    ll sum = 0;
    int s = 1;
    while (n--) {
        int l,r;
        cin >> l >> r;
        // if (l == 1) {
        //     sum += r;
        // }
        // else {
        sum += r-l+1;
        // }
        sum += (l-s)%x;
        s = r+1;

    }
    cout << sum  << endl;
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
