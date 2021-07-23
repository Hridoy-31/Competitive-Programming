#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int od=0, c=0, ev=0, c1=0, flag=0; 
        for (int i=0; i< s.size(); i++) {
            if (i%2 != 0) {
                if (s[i] == '?') {
                    c1++;
                }
                else if (s[i] == '1') {
                    od++;
                }
            }
            else {
                if (s[i] == '?') {
                    c++;
                }
                else if (s[i] == '1') {
                    ev++;
                }
            }
            if ((10-i)/2 + od < c + ev) {
                flag = 1;
                cout << i+1 << endl;
                break;
            }
            if ((9-i)/2 + ev < c1 + od) {
                flag = 1;
                cout << i+1 << endl;
                break;
            } 
        }
        if (flag == 0) {
            cout << 10 << endl;
        }
    }
    return 0;
}
