#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	char c[n];
	int x = 97;
	for (int i=0; i<k; i++) {
		c[i] = char(x);
		x++;
	}
	int i = 0;
	
	while (n--) {
		cout << c[i++];
		if (i == k) {
			i = 0;
		}
	}
	
	return 0;
}
