#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ll n,k;
    cin >> n >> k;
    ll maxi = INT_MIN;
    while (n--) {
        ll f,t;
        cin >> f >> t;
        if (t > k) {
            ll x = f-(t-k);
            if (x > maxi) {
                maxi = x;
            } 
        }
        else {
            ll x = f;
            if (x > maxi) {
                maxi = x;
            }
        }
    }
    cout << maxi << endl;
    return 0;
}
