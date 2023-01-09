#include <bits/stdc++.h>
// #include "debugging.h"
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    int a,b;
    cin >> a >> b;
    if (abs(a-b) == 1 or abs(a-b) == 9) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
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
