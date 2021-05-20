#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int start=0, move=0, index=0;
    for (int i=0; i<s.size(); i++) {
        index = abs(s[i] - 97);
        int walk = abs(start - index);
        if (walk < 13) {
            move = move + walk;
        }
        else {
            move = move + 26 - walk;
        }
        start = index;
    }
    cout << move << endl;
    return 0;
}
