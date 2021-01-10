#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int g=n,turn=0,left=0,right=n-1,sp=0,dp=0;
    while (g!=0) {
        if (turn%2==0) {
            if (a[left] > a[right]) {
                sp = sp + a[left];
                left++;
            }
            else {
                sp = sp + a[right];
                right--;
            }
        }
        else {
           if (a[left] > a[right]) {
                dp = dp + a[left];
                left++;
            }
            else {
                dp = dp + a[right];
                right--;
            } 
        }
        turn++;
        g--;
    }

    cout << sp << " " << dp << endl;

    return 0;
}
