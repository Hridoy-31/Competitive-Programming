#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> II;
typedef pair<int, char> pic;

const int M = 3e5+7;
const ll MOD = 1e9+7;
const ll INF = LLONG_MAX;

void precalc(){}


void solve(int tc) {
    
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n,c;
        cin >> n;
        bool flag = true;
        vector <int> a(n), b(n);

        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        for (int i=0; i<n; i++) {
            cin>>b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i=n-1; i>=0; i--) {
            if (a[i] == b[i] || a[i]+1 == b[i]) {
                c++;
            }
            else {
            cout << "NO" << endl;;
            flag = false;
            break;
            }
        }
        if (c > 0 && flag) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
