#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
    int n;
    cin >> n;
    long long int a[n];
    long long int mult = 1;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        mult = (mult * a[i]) % MOD;
    }

    cout << mult << endl;

    return 0;
}
