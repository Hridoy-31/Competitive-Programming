#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n%4 != 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            n = n/2;
            for (int i=1; i<=n; i++) {
                cout << 2*i << " ";
            }
            for (int i=1; i<n; i++) {
                cout << 2*i-1 << " ";
            }
            cout << 3*n-1 << endl;
        }
    }
    return 0;
}
