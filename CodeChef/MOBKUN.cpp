#include <bits/stdc++.h>
// #include "debugging.h"
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    ll n,m,k,x;
    cin >> n >> m >> k >> x;
    x = (x-1)%((k*n)+m);
    if (x>=(k-1)*n) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
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
