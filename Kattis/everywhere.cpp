#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n;
        vector <string> v;
        for (int i=0; i<n; i++) {
            cin >> s;
            bool status = false;
            int counter = 0;
            while (counter < v.size() && status == false) {
                if (v[counter] == s) {
                    status = true;
                }
                counter++;
            }
            if (status == false) {
                v.push_back(s);
            }
        }
        cout << v.size() << endl;
    }
    return 0;
}
