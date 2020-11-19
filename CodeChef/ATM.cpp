#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    double y,r;
    cin >> x >> y;

    if (x%5==0 && x+0.50 < y) {
        r = y - x - 0.50;
        cout << fixed << setprecision(2) << r << endl;
    }
    else {
        cout << fixed << setprecision(2) << y << endl;
    } 

    return 0;
}
