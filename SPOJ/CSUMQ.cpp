#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum[n];
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int l,r;
        cin >> l >> r;
        cout << sum[r+1] - sum[l] << endl;
    }
    return 0;
}
