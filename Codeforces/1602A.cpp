#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s,s1;
        cin >> s;
        s1 = s;
        sort(s1.begin(), s1.end());
        char a;
        string b;
        a = s1[0];
        int c = 0;
        for (int i=0; i<s.size(); i++) {
            if (s[i] == a && c == 0) {
                c++;
            }
            else {
                b.push_back(s[i]);
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
