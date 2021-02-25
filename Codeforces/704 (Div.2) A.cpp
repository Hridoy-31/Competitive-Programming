#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long int p,a,b,c;
        cin >> p >> a >> b >> c;
        long long int f,s,t;
        t = c - (p%c);
        if (t == c) {
            t = 0;
        }
        s = b - (p%b);
        if (s == b) {
            s = 0;
        }
        f = a - (p%a);
        if (f == a) {
            f = 0;
        }
        long long int minfs = min(f,s);
        cout << min(minfs, t) << endl;
    }
    return 0;
}
