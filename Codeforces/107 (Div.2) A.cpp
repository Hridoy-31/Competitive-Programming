#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;
    while (t--) {
        long long int n,var,c1=0,c2=0,c3=0;
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> var;
            if (var==1 || var==3) {
                c3++;
            }
        }
        cout << c3 << endl;
    }
    return 0;
}
