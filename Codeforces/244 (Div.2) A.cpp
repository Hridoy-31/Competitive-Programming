#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int crime = 0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        if (a[i] != -1) {
            sum = sum + a[i];
        }
        else if (sum == 0 && (a[i] = -1)) {
            crime++;
        }
        else if (sum > 0 && (a[i] = -1)) {
            sum--;
        }
    }
    cout << crime << endl;
    return 0;
}
