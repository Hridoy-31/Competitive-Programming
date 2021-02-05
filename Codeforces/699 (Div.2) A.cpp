#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int x = 0,y = 0,up = 0,down = 0,right = 0,left = 0,count = 0;
        cin >> x >> y;
        string s ;
        cin >> s;

        for (int i=0; i<s.size(); i++) {
            if (s[i] == 'U') {
                up++;
            }
            else if (s[i] == 'D') {
                down++;
            }
            else if (s[i] == 'L') {
                left++;
            }
            else if (s[i] == 'R') {
                right++;
            }
        }
        if (x <= right && x >= 0) {
            count++;
        }
        else if (abs(x) <= left && x < 0) {
            count++;
        }
        if (abs(y) <= down && y < 0) {
            count++;
        }
        else if (y <= up && y >= 0) {
            count++;
        }

        if (count != 2) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
