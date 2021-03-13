#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--) {
        long long int n,count=0;
        cin >> n;
        long long arr[n];
        vector <int> vs;
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        for (long long int i=n-1; i>=0; i--) {
            if (!(count>0 || arr[i]>0)) {
                vs.push_back(0);
            }
            else {
                count = max(arr[i], count);
                count--;
                vs.push_back(1);
                
            }
        }
        for (long long int i=n-1; i>=0; i--) {
            cout << vs[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
