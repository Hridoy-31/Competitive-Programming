#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int n;
	cin >> n;
	
	if (n%2==0 && n%4==0) {
		cout << "0" << endl;
	} 
	else if (n%2==0 && n%4!=0) {
		cout << "1" << endl;
	}
	else {
		if ((n-1)%4==0) {
			cout << "1" << endl;
		}
		else {
			cout << "0" << endl;
		}
	}
	
	return 0;	
}
