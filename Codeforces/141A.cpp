#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,sp,sf;
    cin >> s1 >> s2 >> sp;
    sf = s1 + s2;
    sort(sf.begin(), sf.end());
    sort(sp.begin(), sp.end());
    int x = sf.compare(sp);
    if (x == 0) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
    return 0;
}
