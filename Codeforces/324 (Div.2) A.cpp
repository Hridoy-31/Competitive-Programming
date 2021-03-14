#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    int a[n];
    bool flag = true;
    if (t%2 == 0 && t != 10) {
        for (int i=n-1; i>=0; i--) {
            a[i] = t;
        }
    }
    else if (n*10 <= t) {
        cout << "-1" << endl;
        flag = false;
    }
    else if (t == 10) {
        a[0] = 1;
        for (int i=1; i<n; i++) {
            a[i] = 0;
        }
    }
    else {
        for (int i=n-1; i>=0; i--) {
            a[i] = t;
        }
    }
    if (flag) {
        for (int i=0; i<n; i++) {
        cout << a[i];
        }
        cout << endl;
    }
    
    return 0;
}
