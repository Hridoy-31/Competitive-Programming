#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0,c=0;
    cin >> n;
    long int a[n];

    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    for (int i=0; i<n-1; i++) {
        if(a[i] <= a[i+1]) {
            c++;
            if (c > max) {
                max = c;
            }
        }
        else {
            c = 0;
        }
    }

    cout << max+1;

    return 0;
}
