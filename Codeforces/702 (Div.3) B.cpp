#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, cnt = 0;
		cin >> n;
		int num[n];
        int cont[3] = {0};
		for(int i=0; i<n; i++) {
			cin >> num[i];
			cont[num[i]%3]++;
		}
        if (cont[0] < n/3) {
            cnt = cnt - cont[0] + n/3;
            cont[2] -= cnt;
            if (cont[2] > cont[1]) {
                cnt = cnt + 2*cont[2] - 2*(n/3);
            }
            else {
                cnt = cnt - n/3 + cont[1];
            }
        }
        else {
            cnt = cnt - n/3 + cont[0];
            cont[1] += cont[0] - n/3;
            if (cont[2] > cont[1]) {
                cnt = cnt + 2*cont[2] - 2*(n/3);
            }
            else {
                cnt = cnt - n/3 + cont[1];
            }
        }
		cout << cnt << endl;
	}
	return 0;
}

