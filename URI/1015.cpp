#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    float x = pow(abs(x1-x2),2) + pow(abs(y1-y2),2);
    cout << fixed << setprecision(4) << pow(x,0.5) << endl;
    return 0; 
}
