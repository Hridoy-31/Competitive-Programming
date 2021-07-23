#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--) {
        string s,t;
        cin >> s >> t ;
        int index = 0;
        reverse(s.begin(),s.end());
        reverse(t.begin(),t.end());
        for (int i=0; i<s.size(); i++) {
            if (index == t.size()) {
                break;
            }
            if (t[index] == s[i]) {
                index++;
            }
            else {
                i++;
            }
        }
        if (index != t.size()) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
