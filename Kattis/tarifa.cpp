#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,total=0;
    cin >> x;
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        total = total + (x - a[i]);
    }
    cout << total + x << endl;
    return 0;
}
