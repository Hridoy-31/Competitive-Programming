#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool c = true;
    string s;
    cin >> s;
    vector<int> a(26);

    for (int i=0; i<s.size(); i++) {
        a[s[i]-'a']++;
    }

    for (int i=0; i<26; i++) {
        if (a[i]%2 == 0) {
            c = true;
        }
        else {
            c = false;
            cout << "No"<< endl;
            return 0;
        }
    }

    if (c) {
        cout << "Yes" << endl;
    }

    return 0;
}