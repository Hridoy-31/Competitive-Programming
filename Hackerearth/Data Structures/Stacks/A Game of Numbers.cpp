#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int a[t];
    for (int i=0; i<t; i++) {
        cin >> a[i];
    }
    for (int i=0; i<t; i++) {
        int j,k,l=0;
        for (j=i+1; j<t; j++) {
            if (a[j]>a[i]) {
                break;
            }
        }
        for (k=j+1; k<t; k++) {
            if (a[k]<a[j]) {
                l++;
                break;
            }
        }
        if (l>0) {
            cout << a[k] <<" "; 
        }
        else {
            cout << "-1" << " ";
        }
    }

    return 0;
}
