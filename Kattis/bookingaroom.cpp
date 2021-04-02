#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,n,x;
    cin >> r >> n;
    bool availability = false;
    bool *room = new bool[r+1];
    for (int i=0; i<n; i++) {
        cin >> x;
        room[x] = true;
    }
    for (int i=1; i<r+1; i++) {
        if (room[i] == false) {
            cout << i << endl;
            availability = true;
            break;
        }
    }
    if (availability == false) {
        cout << "too late" << endl;
    }
    return 0;
}
