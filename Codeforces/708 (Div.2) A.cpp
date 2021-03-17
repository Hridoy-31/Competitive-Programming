#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        map <int, int> mapi;
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            mapi[arr[i]]++;
        }
        for (auto x : mapi) {
            cout << x.first << " ";
        }
        for (auto x : mapi) {
            while (x.second != 1) {
                cout << x.first << " ";
                x.second = x.second - 1;
            }
        }
        cout << "\n";
    }
    return 0;
}
