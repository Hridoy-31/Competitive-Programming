#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
            for (int j=1; j<n; j++) {
                if (a[j] != a[j-1]) {
                    if (j == 1) {
                        if (a[j] == a[j+1]) {
                            cout << j << endl;
                            break;
                        }
                        else {
                            cout << j+1 << endl;
                            break;
                        }
                    }
                    else {
                        cout << j+1 << endl;
                        break;
                    }
                }
            }
    }
    return 0;
}
