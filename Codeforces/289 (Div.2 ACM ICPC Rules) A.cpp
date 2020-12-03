#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,max=0;
    cin >> n;
    int a[n][n];

    if (n==1) {
        cout << '1' << endl;
        return 0;
    }

    for (i=0,j=0; j<n; j++) {
        a[i][j] = 1;
    }
    for(i=0,j=0; i<n; i++) {
        a[i][j] = 1;
    }

    for (i=1; i<n; i++) {
        for (j=1; j<n; j++) {
            a[i][j] = a[i-1][j] + a[i][j-1];
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    cout << max << endl;

    return 0;
}
