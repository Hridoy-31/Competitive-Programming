#include <iostream>
using namespace std;

int main()
{
  int val,c=0;

  while (cin >> val) {
    if (val == 0) {
      break;
    }
    else {
      c++;
      cout << "Case " << c << ':' << ' ' << val << endl;
    }
  }

  return 0;
}
