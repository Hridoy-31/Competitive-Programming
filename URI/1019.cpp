#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin >> d;
    int h,m,s;
    h = d/3600;
    d = d-(h*3600);
    m = d/60;
    d = d-(m*60);
    cout << h << ":" << m << ":" << d << endl;
    return 0;
}
