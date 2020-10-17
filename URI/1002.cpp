#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main()
{
  double r,a;
  cin >> r;

  a = PI*r*r;

  cout << "A="  << fixed << setprecision(4) << a << endl;

  return 0;
}
