#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,k;
    int c=0;
    cin >> n >> k;

    long a[n];

    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i]%k == 0) {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
