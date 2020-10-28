#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,y,w,m,a,b;
	cin >> y >> w;

	m = max(y,w);

	a = (6-m)+1;
	b = 6;
	
	if ((b%2 == 0) && (a%2==0)) {
		b = b/2;
		a = a/2;
		//cout << a << "/" << b << endl; 
	}
	if (b%a == 0) {
		b = b/a;
		a = a/a;
		cout << a << "/" << b << endl;
	} 
	else {
		cout << a << "/" << b << endl;
	}

	return 0;

}
