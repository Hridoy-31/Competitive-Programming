#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,c=0;
    cin >> n >> d;
    long long int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort (a,a+n);

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (abs(a[i]-a[j]) <= d) {
                c++;
            }
        }
    }

    cout << c-n << endl;

    return 0;
}
