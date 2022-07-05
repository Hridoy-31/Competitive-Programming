#include <bits/stdc++.h>
// #include "debugging.h"
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    string b,a;
    cin >> b;
    for(int i=0; i<b.size(); i++) {
        if (i==0) {
            a.push_back(b[i]);
        }
        else if (i%2!=0) {
            a.push_back(b[i]);
        }
    }
    cout << a << endl;
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
