#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,x,cy=0;
    cin >> n >> h >> x;
    int t[n];
    for (int i=0; i<n; i++) {
        cin >> t[i];
        if (t[i]+x >= h) {
            cy++;
            cout << "YES" << endl;
            break;
        }
    }
    if (cy == 0) {
        cout << "NO" << endl;
    } 
    return 0;
}
