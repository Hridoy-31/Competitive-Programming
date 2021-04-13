#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using fun_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


int32_t main()
{
	long long int n,q;
	cin >> n >> q;
    long long int a[n];
    set <long long int> si[51];
    for (long long int i=0; i<n; i++) {
        cin >> a[i];
    }
	fun_set<long long int> fs;
	for (long long int i=0; i<n; i++) {
		si[a[i]].insert(i);
		fs.insert(i);
	}
	long long int index = 0;
	while (q--) {
		long long int c;
		cin >> c;
		long long int x = *si[c].begin();
		cout << fs.order_of_key(x) + 1 << " ";
		fs.erase (fs.find(x));
		si[c].erase (si[c].begin());
		index = index - 1;
		si[c].insert(index);
		fs.insert(index);
	}
	cout << endl;
	return 0;
}
