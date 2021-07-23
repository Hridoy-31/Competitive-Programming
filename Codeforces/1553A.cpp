#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{ 
    ll i,j,sum=0,sum1=0,sum2=0;
 
    ll n;
    cin >> n;
    if (n%10 != 9) {
        cout << n/10 << endl;
    }
    else {
        cout << 1 + n/10 << endl;
    }
}

signed main()
{  
    ll t;
    cin >> t;
    while (t--) { 
       solve();
    } 
    return 0;
}
