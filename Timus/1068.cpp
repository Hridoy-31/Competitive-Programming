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
    ll sum = 0;
    if (n<=0) {
        while (n<=1) {
            sum += n;
            n++;
        }
    }
    else {
        while(n>=1) {
            sum += n;
            n--;
        }
    }
    cout << sum << endl;
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
