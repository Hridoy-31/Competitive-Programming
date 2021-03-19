#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a=0, b=0;
    for (int i=0; i<s.size(); i+=2) {
        if (s[i] == 'A') {
            a = a + s[i+1];
        }
        else if (s[i] == 'B') {
            b = b + s[i+1];
        }
    }
    
    if (a > b) {
        cout << "A" << endl;
    }
    else {
        cout << "B" << endl;
    }
    return 0;
}
