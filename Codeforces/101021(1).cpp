#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll a=1, b=1000000;
    while(a != b) {
        ll mid = (a+b+1)/2;
        cout << mid << endl;
        string res;
        cin >> res;
        if (res == "<") {
            b = mid - 1;
        }
        else if (res == ">=") {
            a = mid;
        }
    }

    cout << "! " << a << endl;
    return 0;
}
