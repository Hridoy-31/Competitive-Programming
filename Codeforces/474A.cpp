#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char n;
    cin >> n;
    string s1;
    cin >> s1;
    if (n=='R') {
        for (int i=0; i<s1.size(); i++) {
            int x = s.find(s1[i]);
            cout << s[x-1];
        }
        cout << endl;
    }
    else {
        for (int i=0; i<s1.size(); i++) {
            int x = s.find(s1[i]);
            cout << s[x+1];
        }
        cout << endl;
    }
    return 0;
}
