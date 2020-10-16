#include <iostream>
using namespace std;

int main()
{
  int a,b,c,f=0,i;
  cin >> a >> b >> c;

  for(i=a; i<=b; i++) {
    if (c%i == 0) {
      f++;
    }
  }

  cout << f << endl;

  return 0;
}
