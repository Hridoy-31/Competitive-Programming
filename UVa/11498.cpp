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
    ll t;
    // cin >> t;
    while ((cin >> t) and (t != 0)) {
        int n,m,x,y;
        cin >> n >> m;
        for (int i=0; i<t; i++) {
            cin >> x >> y;
            if (x==n or y==m) {
                cout << "divisa" << endl;
            }
            else if (x>n and y>m) {
                cout << "NE" << endl;
            } 
            else if (x>n and y<m) {
                cout << "SE" << endl;
            }
            else if (x<n and y>m) {
                cout << "NO" << endl;
            } 
            else if (x<n and y<m) {
                cout << "SO" << endl;
            }
        }
    }
    return 0;
}
