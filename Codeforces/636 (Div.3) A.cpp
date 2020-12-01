#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long int n,c=3,k=2; 
        cin >> n;
        while (n%c!=0) {
            c = c + pow(2,k);
            k++;
        }
        cout << n/c << endl;
    }

    return 0;
}
