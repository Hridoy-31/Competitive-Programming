#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cd=0,ci=0,c=0;
    string v[n];
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    for (int i=0; i<n-1; i++) {
        if (v[i].compare(v[i+1]) > 0) {
            cd++;
        }
        else if (v[i].compare(v[i+1]) < 0) {
            ci++;
        }
        else {
            c++;
        }
    }
    if (cd == n-1) {
        cout << "DECREASING" << endl;
    }
    else if (ci == n-1) {
        cout << "INCREASING" << endl;
    }
    else {
        cout << "NEITHER" << endl;
    }
    return 0;
}
