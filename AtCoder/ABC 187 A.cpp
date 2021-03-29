#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int t1=0, t2=0;
    for (int i=0; i<s1.size(); i++) {
        t1 += s1[i]-'0';
    }
    for (int i=0; i<s2.size(); i++) {
        t2 += s2[i]-'0';
    }
    cout << max(t1,t2) << endl;
    return 0;
}
