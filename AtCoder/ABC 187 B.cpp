#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin >> n;
    vector <int> x(n), y(n);
    for (int i=0; i<n; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (abs(x[i]-x[j])>=abs(y[i]-y[j])) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
