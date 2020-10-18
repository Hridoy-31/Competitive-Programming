#include <iostream>
using namespace std;

int main()
{
  int n,m,a,b,p,c1=0,c2=0,c3=0;
  cin >> n >> m >> a >> b;

  if (n%m == 0) {
    c1 = (n/m)*b;
    if (n*a > c1) {
      cout << c1 << endl;
    }
    else {
      cout << n*a << endl;
    }
 
  }
  else {
    c1 = (n/m)*b;
    p = n - (n/m)*m;
    c2 = p*a;
    c3 = ((n/m)+1)*b;

     if (c1+c2 <= c3) {
       cout << c1+c2 << endl;
     }
     else {
       cout << c3 << endl;
     }
  }
  
  return 0;
}
