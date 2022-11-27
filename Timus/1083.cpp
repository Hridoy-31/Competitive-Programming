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
    string s;
    cin >> s;
    int c = 0;
    for (int i=0; i<s.size(); i++) {
        if(s[i] == '!') {
            c++;
        }
    }
    ll mul = 1;
    while (n>0) {
        mul = mul * n;
        n = n-c;
    }
    cout << mul << endl;
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
