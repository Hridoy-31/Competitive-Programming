#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  string name;
  double sal,bonus;
  cin >> name >> sal >> bonus;

  double res = sal + (bonus*0.15);

  cout << "TOTAL = R$ " << fixed << setprecision(2) << res << endl;

  return 0;
}

   
