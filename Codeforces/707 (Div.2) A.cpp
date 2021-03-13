#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector <pair <long long int, long long int>> vpll;
        vector <long long int> vll;
        for (long long int i=0; i<n; i++) {
            long long a,b;
            cin >> a >> b;
            vpll.push_back({a,b});
        }
        for (long long int i=0; i<n; i++) {
            long long temp;
            cin >> temp;
            vll.push_back(temp);
        }
        long long init = 0, ls = 0, var = vpll[0].first;
        while (init < n-1) {
            long long start = ls + vll[init] +  var;
            long long v1 = (vpll[init].second - vpll[init].first);
            v1 = v1/2;
            if ((vpll[init].second - vpll[init].first)%2 != 0) {
                v1++;
            }
            ls  = max(vpll[init].second, v1+start);
            var = vpll[init+1].first - vpll[init].second;
            init++;
        }
        cout << vll[n-1] + ls + var << endl;
    }
    return 0;
}
