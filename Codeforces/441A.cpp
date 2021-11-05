#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ll n,v;
    cin >> n >> v;
    set <ll> ans;
    ll k[n];
    for (int j=0; j<n; j++) {
        cin >> k[j];
        
        for (int i=0; i<k[j]; i++) {
            ll cost;
            cin >> cost;
            if (cost < v) {
                ans.insert(j+1);
            }
        }
    }
    cout << ans.size() << endl;
    for (auto it = ans.begin(); it != ans.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
