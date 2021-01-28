#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int q,d;
        cin >> q >> d;
        long long int a[q+1];
        for (int i=0; i<q; i++) {
            cin >> a[i];
        }
        for (int i=0; i<q; i++) {
            long long int var,tar;
            bool flag = false;
            var = a[i];
            while (var > 0) {
                tar = var;
                while (tar != 0) {
                    if (tar%10 == d) {
                        flag = true;
                        break;
                    }
                    tar = tar / 10;
                }
                
                if (flag == true) {
                    cout << "YES" << endl;
                    break;
                }
                var = var - d;
            }
            if (flag != true) {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
