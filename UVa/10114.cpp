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
    int duration, dep_num;
    double down_payment, loan;
    while (cin >> duration >> down_payment >> loan >> dep_num and duration>=0) {
        double dep[101];
        while (dep_num--) {
            int month;
            double percent;
            cin >> month >> percent;
            for (int i=month; i<101; i++) {
                dep[i] = percent;
            }
        }
        
        double monthlypayment = loan / duration;
        double currentvalue = (loan + down_payment) * (1-dep[0]);
        double currentloan = loan;
        int time = 0;

        while (currentvalue < currentloan) {
            time++;
            currentvalue *= (1-dep[time]); 
            currentloan -=  monthlypayment;
        }

        cout << time << " month";
      
      // small error in testcases. It includes "0 months" also. so,
      // "month" sould be only for 1. For others, it will always
      // be "months"
      
        if (time != 1) {
            cout << "s";
        } 
        cout << endl;
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
