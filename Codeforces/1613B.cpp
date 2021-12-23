#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        int mn = *min_element(v.begin(), v.end());
        for (int i=0, j=0; j<n/2; i++) {
            if (v[i] != mn) {
                cout << v[i] << " " << mn << endl;
                j++;
            }
        }
    }
    return 0;
}
