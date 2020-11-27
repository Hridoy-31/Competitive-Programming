#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum=0,c=0;
    cin >> n >> k;

    for (int i=1; i<=n; i++) {
        sum = sum + 5*i;
    }

    while (sum+k > 240) {
        sum = sum - 5*n;
        n--;
    }

    cout << n << endl;

    return 0;
}
