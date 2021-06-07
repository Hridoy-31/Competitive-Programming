#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	set <int> s;
	for (int i=0; i<2; i++) {
		int x;
		cin >> x;
		for (int j=0; j<x; j++) {
			int temp;
			cin >> temp;
			s.insert(temp);
		}
	}
	if (s.size() == n) {
		cout << "I become the guy." << endl;
	}
	else {
		cout << "Oh, my keyboard!" << endl;
	}
	return 0;
}
