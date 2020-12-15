#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;

    if (n < 0) {
        n = n*(-1);
    }
    while (n>0) {
        sum = sum + n%10;
        n = n/10;
    }

    cout << sum << endl;

    return 0;

}
