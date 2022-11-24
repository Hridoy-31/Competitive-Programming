#include <bits/stdc++.h>
// #include "debugging.h"
 
using namespace std;
using ll = long long int;
 
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int i=0, j=n-1, res=0;
    while (i<j) {
        if (a[i] == a[j]){
            i++, j--;
            continue;
        }
        if (a[i] > a[j]) {
            a[i] = a[i] - a[j];
            j--;
        }
        else {
            a[j] = a[j] - a[i];
            i++;
        }
        res++;
    }
    cout << res << endl;
}
 
int main()
{
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
