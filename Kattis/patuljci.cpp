#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[9], sum=0,i,j;
    for ( i=0; i<9; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (i=0; i<9; i++) {
        for ( j=0; j<9; j++) {
            if (i != j && sum-a[i]-a[j]==100) {
                goto final;
            }
        }
    }
    final:
    for (int k=0; k<9; k++) {
        if (k!=i && k!=j) {
            cout << a[k] << endl;
        }
    }
    return 0;
}
