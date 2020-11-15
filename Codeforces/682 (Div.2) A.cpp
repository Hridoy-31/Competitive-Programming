#include <bits/stdc++.h>

using namespace std;

int main()
{
   int i,j,n,t;
   cin >> t;
   
   for (i=0; i<t; i++) {
       cin >> n;
       int a[n];
       for (j=0; j<n; j++) {
           a[j] = 1;
       }
       
       for (j=0; j<n; j++) {
           cout << a[j] << ' ';
       }
       cout << endl;
   }
   
   return 0;
}
