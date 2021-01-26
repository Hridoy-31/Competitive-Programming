#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int s[n];
        for (int i=0; i<n; i++) {
            cin >> s[i];
        }
        sort(s,s+n);
        int c = s[n-1];
        for (int i=0; i<n-1; i++) {
            if (abs(s[i]-s[i+1]) <= c) {
                c = abs(s[i]-s[i+1]);
            }
        }
        cout << c << endl;
    }
    return 0;
}
