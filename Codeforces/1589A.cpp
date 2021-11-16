#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t; 
	cin >> t; 
	while (t-- ) {
		long long int u,v,a,b;
		cin >> u >> v; 
		a = -u*u;
		b = v*v; 
		cout << a << " " << b << endl;
	}
	return 0;
}
