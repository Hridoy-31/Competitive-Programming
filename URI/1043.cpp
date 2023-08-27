#include <bits/stdc++.h>
// #include "debugging.h"

using namespace std;
using ll = long long int;

ll gcd(ll a, ll b)
{
    return a % b == 0 ? b : gcd(b, a % b);
}

void solve()
{
    double a, b, c;
    cout << fixed << setprecision(1);
    cin >> a >> b >> c;
    double maxi = max(max(a, b), c);
    double test = (a + b + c) - maxi;
    if (test > maxi)
    {
        cout << "Perimetro = " << a + b + c << endl;
    }
    else
    {
        cout << "Area = " << 0.5 * (a + b) * c << endl;
    }
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
