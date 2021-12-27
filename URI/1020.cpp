#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin >> d;
    int y,m;
    y = d/365;
    d = d-(y*365);
    m = d/30;
    d = d-(m*30);
    cout << y << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    return 0;
}
