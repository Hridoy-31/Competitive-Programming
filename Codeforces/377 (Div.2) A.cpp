#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,res,n=1;
    cin >> k >> r;

    while (true) {
        if(((k*n)%10==0) || ((k*n)-r)%10==0) {
            cout << n << endl;
            break;
        }
        else {
            n++;
        }
    }

    return 0;
}
