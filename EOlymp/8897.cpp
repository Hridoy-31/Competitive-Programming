#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (true)
    {
        n++;
        if (n%10 == 0) {
            cout << n << endl;
            break;
        }
    }

    return 0;
    
}
