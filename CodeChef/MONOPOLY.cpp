#include <bits/stdc++.h>
// #include "debugging.h"
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    int a[3];
    for (int i=0; i<3; i++) {
        cin >> a[i];
    }
    sort(a,a+3, greater<int>());
    if (a[0] > (a[1]+a[2])) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
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
