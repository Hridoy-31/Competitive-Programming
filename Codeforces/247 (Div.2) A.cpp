#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f,s,t,fo;
    int tot = 0;
    cin >> f >> s >> t >> fo;
    string str;
    cin >> str;
    for (int i=0; i<str.size(); i++) {
        if (str[i] == '1') {
            tot = tot + f;
        }
        else if (str[i] == '2') {
            tot = tot + s;
        }
        else if (str[i] == '3') {
            tot = tot + t;
        }
        else {
            tot = tot + fo;
        }
    }
    cout << tot << endl;
    return 0;
}
