#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string a,b;
        int exa,exb;
        cin >> a >> exa;
        cin >> b >> exb;
        while (a.length()>0 && a.back()=='0') {
            a.pop_back();
            exa++;
        }
        while (b.length()>0 && b.back()=='0') {
            b.pop_back();
            exb++;
        }
        if (a.length() + exa > b.length() + exb) {
            cout << ">" << endl;
        }
        else if (a.length() + exa < b.length() + exb) {
            cout << "<" << endl; 
        }
        else {
            if (a < b) {
                cout << "<" << endl;
            }
            else if (a > b) {
                cout << ">" << endl; 
            }
            else {
                cout << "=" << endl;
            }
        }
    }
    return 0;
}
