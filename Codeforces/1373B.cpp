#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int c0=0, c1=0;
        string s;
        cin >> s;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='1') {
                c1++;
            }
            else {
                c0++;
            }
        }
        if (min(c0,c1)%2!=0) {
            cout << "DA" << endl;
        }
        else {
            cout << "NET" << endl;
        }
    }
    return 0;
}
