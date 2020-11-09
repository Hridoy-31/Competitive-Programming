#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,m;
    cin >> n >> m;
    
    char a[n][m];
    
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    
    
    for (i=0; i<n; i++) {
        for (j=0; j<m-1; j++) {
            if (a[i][j] != a[i][j+1]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    
    for (i=0; i<n-1; i++) {
        for (j=0; j<m; j++) {
            if (a[i][j] == a[i+1][j]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    
    cout << "YES" << endl;
    
    return 0;
}
