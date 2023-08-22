#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    
    int x,y;
    cin >> x >> y;
    
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << a[x-1]*y << endl;
    
    return 0;
    
}
