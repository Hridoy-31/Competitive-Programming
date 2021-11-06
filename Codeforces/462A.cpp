#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s1,s2,s;
    while (n--) {
        cin >> s;
        s1 = s1 + s;
        s2 = s2 + s;
    }
    reverse(s2.begin(), s2.end());
    if (s1 == s2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
