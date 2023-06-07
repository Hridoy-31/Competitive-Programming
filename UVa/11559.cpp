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
    int n,b,h,w;
    while (cin >> n >> b >> h >> w) {
        int mincost = b+1;
        for (int i=0; i<h; i++) {
            int sbud;
            cin >> sbud;
            for (int j=0; j<w; j++) {
                int bed;
                cin >> bed;
                if (bed >= n and n*sbud <= mincost) {
                    mincost = n*sbud;
                }
            }
        }
        if (mincost <= b) {
            cout << mincost << endl;
        }
        else {
            cout << "stay home" << endl;
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
