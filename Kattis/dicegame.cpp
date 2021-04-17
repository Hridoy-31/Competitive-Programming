#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g[4], e[4];
    int cg=0, ce=0;
    for (int i=0; i<4; i++) {
        cin >> g[i];
        cg = cg + g[i];
    }
    for (int i=0; i<4; i++) {
        cin >> e[i];
        ce = ce + e[i];
    }
    if (cg > ce) {
        cout << "Gunnar" << endl;
    }
    else if (ce > cg) {
        cout << "Emma" << endl;
    }
    else {
        cout << "Tie" << endl;
    }
    return 0;
}
