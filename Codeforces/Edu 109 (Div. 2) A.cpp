#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, var = 100;
        cin >> n;
        if (var%n == 0) {
            cout << var/n << endl;
        }
        else {
            for (int i=2;;i++) {
                var = 100*i;
                if (var%n == 0) {
                    cout << var/n << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
