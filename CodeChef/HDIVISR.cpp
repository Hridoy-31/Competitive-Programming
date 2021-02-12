#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a;
    b = 10;
    while (b--) {
        if (a%b == 0) {
            cout << b << endl;
            break;
        }
    }
    return 0;
}
