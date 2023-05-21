#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc=0; tc<t; tc++) {
        int a[3];
        for (int i=0; i<3; i++) {
            cin >> a[i];
        }
        sort(a,a+3);
        cout << "Case " << tc+1 << ": " << a[1] << endl;
    }
    return 0;
}
