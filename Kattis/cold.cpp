#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    long long a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
