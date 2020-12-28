#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n,x,r=0;
        cin >> n;
        while (n>0) {
            x = n%10;
            r = (r*10)+x;
            n = n/10;
        }
        cout << r << endl;
    }

    return 0;
}
