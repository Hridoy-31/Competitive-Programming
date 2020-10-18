#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num,hour;
  double sal;
  cin >> num >> hour >> sal;

  sal = hour*sal;

  cout << "NUMBER = " << num << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2)  << sal << endl;

  return 0;
}
