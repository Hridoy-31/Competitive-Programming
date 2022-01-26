#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll bound = 1e9+1;
        ll minl = bound, costl = bound;
        ll maxr = 0, costr = bound;
        ll maxlen = 0, costlen = bound;
        for (int i=0; i<n; i++) {
            ll l,r,c;
            cin >> l >> r >> c;

            if (l < minl) {
                minl = l, costl = bound;
            }
            if (l == minl) {
                costl = min(costl, c);
            }

            if (r > maxr) {
                maxr = r, costr = bound;
            }
            if (r == maxr) {
                costr = min(costr, c);
            }

            ll res = costl + costr;

            if (maxlen < r-l+1) {
                maxlen = r-l+1, costlen = bound;
            }
            if (maxlen == r-l+1) {
                costlen = min(costlen, c);
            }

            if (maxlen == maxr-minl+1) {
                res = min(res, costlen);
            }
            cout << res << endl;
        }
    }
    return 0;
}
