#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll c = 0;
        if (n%2 != 0) {
            c = n/2;
        }
        else {
            c = n/2 - 1;
        }
        cout << c << endl;
    }
    return 0;
}
