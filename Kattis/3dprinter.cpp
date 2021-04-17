#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p=1,d=0;
    while (p < n) {
        p = p*2;
        d++;
    }
    d++;
    cout << d << endl;
    return 0;
}
