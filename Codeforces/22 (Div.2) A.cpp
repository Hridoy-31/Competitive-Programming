#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n;
    set <int> s1;
    for (int i=0; i<n; i++) {
        cin >> x;
        s1.insert(x);
    }

    if (n<2 || s1.size()==1) {
        cout << "NO" << endl;
    }
    else {
        auto first = s1.begin();
        advance(first,1);
        cout << *first << endl;
    }
    return 0;

}
