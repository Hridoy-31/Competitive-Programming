#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,w,h;
    cin >> n >> w >> h;
    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x <= sqrt(pow(w,2)+pow(h,2))) {
            cout << "DA" << endl;
        }
        else {
            cout << "NE" << endl;
        }
    }
    return 0;
}
