#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x=1, y=0, z=0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'A') {
            swap(x,y);
        }
        else if (s[i] == 'B') {
            swap(y,z);
        }
        else if (s[i] == 'C') {
            swap(x,z);
        }
    }
    if (x == 1) {
        cout << "1" << endl;
    }
    else if (y == 1) {
        cout << "2" << endl;
    }
    else if (z == 1) {
        cout << "3" << endl;
    }

    return 0;
}
