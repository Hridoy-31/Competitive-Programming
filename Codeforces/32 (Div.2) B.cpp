#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,r;
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '.') {
            r.push_back('0');
        }
        else if (s[i] == '-') {
            if (s[i+1] == '.') {
                r.push_back('1');
            }
            else {
                r.push_back('2');
            }
            i++;
        }
    }
    cout << r << endl;
    return 0;
}
