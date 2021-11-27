#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    while (n--) {
        ll a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end());
    for (int i=1; i<v.size(); i++) {
        if (v[i].second < v[i-1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
