#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,res1=0,res2=0;
    cin >> n;
    
    long a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum = sum + a[i];
    }
    
    sort(a, a+n);
    
    int avg = sum/n;
    
    for (int i=0; i<n; i++) {
        res1 = res1 + (a[i] - avg)*(a[i] - avg);
        res2 = res2 + (a[i] - avg-1)*(a[i] - avg-1);
    }
    
    cout << min(res1, res2) << endl;
    
    return 0;
}
