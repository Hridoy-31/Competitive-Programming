#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int maxi = max(a,b);
	if (a == b) {
		cout << maxi+maxi << endl;
	}
	else {
		cout << maxi + maxi - 1 << endl;
	}
	return 0;
}

