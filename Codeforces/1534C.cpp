#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 1e9 + 7;

int fincheck (int a,int b)
{
    int var = 1;
    while(b > 0) {
        if (b & 1) {
            var = (var*a) % mod;
        }
        a = (a*a) % mod;
        b = b >> 1;
    }
    return var;
}


main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        bool puzz[n + 1];
        int next[n + 1];
        

        for (int i = 1; i <= n; i++) {
            puzz[i] = false;
        }
        int v[2][n];   
        for(int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> v[i][j];
            }
        }
        bool check = true;
        for (int i = 0; i < n; i++) {
            if (v[1][i] != v[0][i]) {
                next[v[0][i]] = v[1][i];
            }
            else {
                check = false;
            }
        }
        if(check != true) {
            cout << 0 << endl;
        }
        else {   
            int cnt = 0;
            for (int i = 1; i <= n; i++) {
                if (puzz[i] == false) {
                    int temp = next[i];
                    puzz[i] = true;
                    while (puzz[temp] == false) {
                        puzz[temp] = true;
                        temp = next[temp];
                    }
                    cnt++;
                }
            }
            cout << fincheck(2, cnt) << endl;
        }
    }

    return 0;
}
