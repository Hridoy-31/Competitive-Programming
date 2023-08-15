#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}

void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (b>c and d>a and (c+d)>(a+b) and c>0 and d>0 and ((a%2)==0)) {
        cout << "Valores aceitos" << endl;
    }
    else {
        cout << "Valores nao aceitos" << endl;
    }
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
