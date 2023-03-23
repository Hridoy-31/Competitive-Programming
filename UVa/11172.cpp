#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    int a,b;
    cin >> a >> b;
    if (a > b) {
        cout << ">" << endl;
    }
    else if (a < b) {
        cout << "<" << endl;
    }
    else {
        cout << "=" << endl;
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
