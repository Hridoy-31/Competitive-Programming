#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int n;
    cin >> n;
    ll c = 0;
    while (n--) {
        string s;
        cin >> s;
        if (s == "Icosahedron") {
            c = c + 20;
        }
        else if (s == "Cube") {
            c = c + 6;
        }
        else if (s == "Tetrahedron") {
            c = c + 4;
        }
        else if (s == "Dodecahedron") {
            c = c + 12;
        }
        else if (s == "Octahedron") {
            c = c + 8;
        }
    }
    cout << c << endl;
    return 0;
}
