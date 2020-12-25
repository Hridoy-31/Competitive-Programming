#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int k2,k3,k5,k6,sum=0;;
    cin >> k2 >> k3 >> k5 >> k6;
    while (k6>0 && k5>0 & k2>0) {
        sum = sum + 256;
        k6--;
        k5--;
        k2--;
    }
    while (k3>0 && k2>0) {
        sum = sum + 32;
        k3--;
        k2--;
    }

    cout << sum << endl;

    return 0;
}
