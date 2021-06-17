#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n,c=0;
        cin >> n;
        vector <int> s;
        if (n/10000 && n!=0) {
            s.push_back((n/10000) * 10000);
            n = n - (n/10000) * 10000;
        }
        if (n/1000 && n!=0) {
            s.push_back(n/1000 * 1000);
            n = n - (n/1000)*1000;
        }
        if (n/100 && n!=0) {
            s.push_back(n/100 * 100);
            n = n - (n/100)*100;
        }
        if (n/10 && n!=0) {
            s.push_back(n/10 * 10);
            n = n - (n/10)*10;
        }
        if (n<=9 && n!=0) {
            s.push_back(n);
            n = 0;
        }
        if (n == 0) {
            cout << s.size() << endl;
            for (auto x : s) {
                cout << x << " ";
            } 
            cout << endl;
        }
    }

    return 0;
}
