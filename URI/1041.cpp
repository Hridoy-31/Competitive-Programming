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
    double x, y;
    cin >> x >> y;
    if (x == 0 and y == 0)
    {
        cout << "Origem" << endl;
    }
    else if (x == 0)
    {
        cout << "Eixo Y" << endl;
    }
    else if (y == 0)
    {
        cout << "Eixo X" << endl;
    }

    if (x > 0 and y > 0)
    {
        cout << "Q1" << endl;
    }
    else if (x > 0 and y < 0)
    {
        cout << "Q4" << endl;
    }
    else if (x < 0 and y > 0)
    {
        cout << "Q2" << endl;
    }
    else if (x < 0 and y < 0)
    {
        cout << "Q3" << endl;
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
