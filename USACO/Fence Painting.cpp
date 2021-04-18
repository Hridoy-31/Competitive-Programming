#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a,b,c,d,count=0;
    cin >> a >> b >> c >> d;
    int lim = max(max(a,b),max(c,d));
    vector <int> s(lim);
    for (int i=a; i<b; i++) {
        s[i] = 1;
    }
    for (int i=c; i<d; i++) {
        s[i] = 1;
    }
    for (int i=0; i<lim; i++) {
        if (s[i] == 1) {
            count++;
        }
    }
    cout << count;
    return 0;
}
