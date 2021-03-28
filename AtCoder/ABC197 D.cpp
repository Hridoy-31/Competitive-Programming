#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    double x,y;
    cin >> x >> y;
    double x1,y1;
    cin >> x1 >> y1;
    double x2,y2,cx,cy;
    cx = (x+x1)/2;
    cy = (y+y1)/2;
    double a = sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1))/2;
    double b = ((x-cx)/a)*sin(M_PI*2/n)+((y-cy)/a)*cos(M_PI*2/n);
    double c = ((x-cx)/a)*cos(M_PI*2/n)-((y-cy)/a)*sin(M_PI*2/n);
    x2 = cx + a*c;
    y2 = cy + a*b;
    cout << setprecision(11);
    cout << fixed << x2 << " " << y2 << endl;
    return 0;
}
