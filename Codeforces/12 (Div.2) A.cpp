#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[9];
    for (int i=0; i<9; i++) {
        cin >> s[i];
    }
    for (int i=0; i<9; i++) {
        if (s[i] != s[8-i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
