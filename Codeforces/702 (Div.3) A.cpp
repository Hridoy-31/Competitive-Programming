#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--) {
    int n, result = 0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=1; i<n; i++) {
        int high = max(a[i-1], a[i]);
        int low = min(a[i-1], a[i]);
        if (high > 2*low) {
            while(high > 2*low) {
                result++;
                low = 2*low;
            }
        }
    }
    cout << result << endl;
   }   
   return 0;
}
