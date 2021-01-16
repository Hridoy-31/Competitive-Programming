#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i=0; i<n-1; i+=2) {
        if (a[i] != a[i+1]) {
            c = c + abs(a[i]-a[i+1]);
        }
    }
    cout << c << endl;

    return 0;
}
