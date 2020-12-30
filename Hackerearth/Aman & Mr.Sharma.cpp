#include <bits/stdc++.h>
using namespace std;

int main()
{
	int d,c=0;
	cin >> d;
	while (d--) {
		int r, x = 0;
		cin >> r >> x;
		if (x*100 >= 2*(float)22/7*r) {
			c++;
		}
	}
	cout << c << endl;
	c = 0;
	
	return 0;
}
