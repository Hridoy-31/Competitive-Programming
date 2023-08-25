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
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fixed << setprecision(1);
    double avg = (2 * a + 3 * b + 4 * c + d) / 10;
    cout << "Media: " << avg << endl;
    if (avg >= 7)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (avg >= 5.0 and avg <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        double x;
        cin >> x;
        cout << "Nota do exame: " << x << endl;
        avg = (avg + x) / 2;
        if (avg >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << avg << endl;
    }
    else
    {
        cout << "Aluno reprovado." << endl;
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
