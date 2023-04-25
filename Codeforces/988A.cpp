#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    int n,k;
    cin >> n >> k;
    int a[n];
    set <int> s;
    int set_size = 0;
    bool flag = false;
    vector <int> v;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        s.insert(a[i]);
        if (s.size() > set_size) {
            v.push_back(i);
            set_size = s.size();
        }
    }
    if (s.size() >= k) {
        cout << "YES" << endl;
        flag = true;
    }
    else {
        cout << "NO" << endl;
    }
    if (flag) {
        for (int i=0; i<k; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
 
int main()
{
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
