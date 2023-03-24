#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while ((cin >> n) and (n != 0)) {
        string s;
        cin >> s;
        int mind = n;
        int r = -n, d = -n;
        for (int i=0; i<n; i++) {
            if (s[i] == 'Z') {
                mind = 0;
                break;
            }
            else if (s[i] == 'R') {
                mind = min(mind, i-d);
                r = i;
            }
            else if (s[i] == 'D') {
                mind = min(mind, i-r);
                d = i;
            }
        }
        cout << mind << endl;
    }
    return 0;
}
