#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll s,x;
        cin >> s;
        ll ans = 0;
        while (s >= 10) {
            x = s/10;
            ans += x*10;
            s = s%10 + x; 
        }
        ans += s;
        cout << ans << endl;
    }
    return 0;
}
