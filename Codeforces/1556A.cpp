#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a=0, b=0;
        ll c,d;
        cin >> c >> d;
        if ((c+d)%2==0) {
            if (c==0 && d==0) {
                cout << 0 << endl;
            }
            else if (c==d) {
                cout << 1 << endl; 
            }
            else {
                cout << 2 << endl;
            }
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
