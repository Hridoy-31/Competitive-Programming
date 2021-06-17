#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int flag = 0;
    char a[n][m];
    for (int i=0; i<n; i++) {
        if (i%2==0) {
            for (int j=0; j<m; j++) {
                a[i][j] = '#';
            }
        }
        else {
            flag++;
            for (int j=0; j<m; j++) {
                if (flag%2 != 0 && j==m-1) {
                    a[i][j] = '#';
                }
                else if (flag%2 == 0 && j == 0) {
                    a[i][j] = '#';
                }
                else {
                    a[i][j] = '.';
                }
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
