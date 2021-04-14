#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,p,o;
    cin >> n >> p >> o;
    if (((p+o)/n) % 2 == 0) {
        cout << "paul" << endl;
    }
    else {
        cout << "opponent" << endl;
    }
    return 0;
}
