#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
// void solve() {

// }
 
int main()
{
    ll b, n;
    while ((cin >> b >> n) and (b!=0) and (n!=0)) {
        int r[b];
        for (int i=0; i<b; i++) {
            cin >> r[i];
        }
        for (int i=0; i<n; i++) {
            int d,c,v;
            cin >> d >> c >> v;
            r[d-1] = r[d-1] - v;
            r[c-1] = r[c-1] + v;
        }
        bool flag = true;
        for (int i=0; i<b; i++) {
            if (r[i] < 0) {
                flag = false;
            }
        }
        if (flag) {
            cout << "S" << endl;
        }
        else {
            cout << "N" << endl;
        }
    }
    return 0;
}
