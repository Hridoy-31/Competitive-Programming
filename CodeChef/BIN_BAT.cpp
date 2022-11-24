#include <bits/stdc++.h>
// #include "debugging.h"
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int x = log2(a);
    cout << (x*b)+(x-1)*c << endl;
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
