#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
signed main()
{
    int t;
    cin >> t;
    while (t--) {
        int n,m,count=0,cp=0,cq=0;
        cin >> n >> m;
        char c[n][m],p[n][m],q[n][m];
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin >> c[i][j];
                if (c[i][j]=='R' || c[i][j]=='W') {
                    count++;
                }
            }
        }
        string s1="RW";
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                p[i][j]=s1[j%2];
            }
            reverse(all(s1));
        }
        string s2 = "WR";
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                q[i][j]=s2[j%2];
            }
            reverse(all(s2));
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (q[i][j] == c[i][j]) {
                    cq++;
                }
                if (p[i][j] == c[i][j]) {
                    cp++;
                }
            }
        }
        if (cp == count || cq == count) {
            cout << "YES" << endl;
            if (cq == count) {
                for (int i=0; i<n; i++) {
                    for (int j=0; j<m; j++) {
                        cout << q[i][j];
                    }
                    cout << endl;
                }
            }
            else if (cp == count) {
               for (int i=0; i<n; i++) {
                    for (int j=0; j<m; j++) {
                        cout << p[i][j];
                    }
                    cout << endl;
                } 
            }
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
