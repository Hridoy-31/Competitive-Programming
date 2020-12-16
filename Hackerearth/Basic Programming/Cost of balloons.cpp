#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,g,p,i,j,ca,cb=0;
    cin >> t;
    while (t--) {
        ca = 0;
        cb = 0;
        cin >> g >> p;
        int n;
        cin >> n;
        int a[n][2];
        for (i=0; i<n; i++) {
            for (j=0; j<2; j++) {
                cin >> a[i][j];
                if (j==0 && a[i][j]==1) {
                    ca++;
                } 
                if (j==1 && a[i][j]==1) {
                    cb++;
                }
            }
        }
        //cout << max(ca,cb) << ' ' << min(g,p) << ' ' << min(ca,cb) << ' ' << max(g,p) << endl;
        cout << max(ca,cb)*min(g,p) + min(ca,cb)*max(g,p) << endl;
        ca = 0;
        cb = 0;
    }
    return 0;
}
