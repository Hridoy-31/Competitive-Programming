#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll bitrev (ll n) {
    ll result = 0;
    while (n != 0) {
        result = result << 1;
        result = result | n & 1;
        n = n >> 1;
    }
    return result;
}

int main()
{
    ll n;
    cin >> n;
    cout << bitrev(n) << endl;
    return 0;
}
