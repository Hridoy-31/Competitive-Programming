#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while(t--){
    int n,d;
    cin >> n >> d;
    int a[n];
    bool sm = true;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] > d)
            sm = false;
        }
        sort(a,a+n);
 
        if(a[0] + a[1] <= d || sm) 
            cout<<"YES" << endl;
        else
            cout<<"NO" << endl;
    }
  return 0;
}
