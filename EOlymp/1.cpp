#include <iostream>
using namespace std;

int main()
{
  int n,a,b;
  cin >> n;

  a = n/10;
  b = n - (a*10);

  cout << a << ' ' << b << endl;

  return 0;
}
