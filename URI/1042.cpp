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
    int x[3], p[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i];
        p[i] = x[i];
    }
    sort(p, p + 3);
    for (auto i : p)
    {
        cout << i << endl;
    }
    cout << endl;
    for (auto i : x)
    {
        cout << i << endl;
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
