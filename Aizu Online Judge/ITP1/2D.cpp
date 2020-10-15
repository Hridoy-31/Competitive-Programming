#include <iostream>
using namespace std;

int main()
{
  int w,h,x,y,r,c=0;
  cin >> w >> h >> x >> y >> r;

  if ((x+r > 0) && (x+r <= w)) {
    c++;
  }
  if ((y+r) > 0 && (y+r) <= h) {
    c++;
  }

  if (c == 2) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}
