#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main()
{
  double r,vol;
  cin >> r;

  vol = (4.0/3)*PI*r*r*r;

  cout << "VOLUME = " << fixed << setprecision(3) << vol << endl;

  return 0;
  
}
