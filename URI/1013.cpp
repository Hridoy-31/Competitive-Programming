#include <iostream>
#include <math.h>
using namespace std;

int maiorAB (int x, int y);

int main()
{
  int a,b,c;
  cin >> a >> b >> c;

  cout << maiorAB(c,maiorAB(a,b)) << " eh o maior" << endl;
 
  return 0;
}

int maiorAB (int x, int y) {
  int res = (x+y+abs(x-y))/2;
  return res;
}
