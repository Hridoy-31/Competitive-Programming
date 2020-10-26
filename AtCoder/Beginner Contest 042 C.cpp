#include <iostream>
using namespace std;

int main() 
{
    int i,n,k;
    bool d[10];
    cin >> n >> k;
    
    for (i=0; i<10; i++) {
        d[i] = false;
    }
    
    for (i=0; i<k; i++) {
        int x;
        cin >> x;
        d[x] = true;
    }
    
    while (true) {
        int p = n;
        bool status = true;
		while (p) {
			if(d[p%10]) {
				status = false;
				break;
			}
			p = p / 10;
		}

		if (status) {
			break;
		}
		n++;
    }

	cout << n << endl;

	return 0;
}
