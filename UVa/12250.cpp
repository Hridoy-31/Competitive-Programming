#include <bits/stdc++.h>
// #include "debugging.h"
 
using namespace std;
using ll = long long int;

// Policy based data structure
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T, class U = null_type, class chash = hash<T>> using hset = 
gp_hash_table<T,U,chash>;
template<class T, class U = null_type, class cmp = less<T>> using oset = 
tree<T,U,cmp,rb_tree_tag,tree_order_statistics_node_update>;

// GCD
ll gcd (ll a, ll b) {
    return a%b==0?b:gcd(b,a%b);
}
 
void solve() {
    string s;
    int c = 0;
    while (cin >> s and s != "#") {
        c++;
        if (s == "HELLO") {
            cout << "Case " << c << ": " << "ENGLISH" << endl; 
        }
        else if (s == "HOLA") {
            cout << "Case " << c << ": " << "SPANISH" << endl; 
        }
        else if (s == "HALLO") {
            cout << "Case " << c << ": " << "GERMAN" << endl; 
        }
        else if (s == "BONJOUR") {
            cout << "Case " << c << ": " << "FRENCH" << endl; 
        }
        else if (s == "CIAO") {
            cout << "Case " << c << ": " << "ITALIAN" << endl; 
        }
        else if (s == "ZDRAVSTVUJTE") {
            cout << "Case " << c << ": " << "RUSSIAN" << endl; 
        }
        else {
            cout << "Case " << c << ": " << "UNKNOWN" << endl; 
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
