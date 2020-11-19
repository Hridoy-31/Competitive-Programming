#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,sum = 0;
    long n;
    cin >> t;

    while (t--) {
        cin >> n;
        while (n != 0) {
            x = n%10;
            sum = sum + x;
            n = n/10;
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
