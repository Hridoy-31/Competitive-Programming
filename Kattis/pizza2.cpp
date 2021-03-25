#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin >> r >> c;
    cout << setprecision(8);
    cout << fixed << (M_PI*(r-c)*(r-c))/(M_PI*r*r) * 100 << endl;
    return 0;
}
