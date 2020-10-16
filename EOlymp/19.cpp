#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a;
  cin >> a;
  int i,j,c=0;
  
  if (a.size()%2 == 1) {
    for (i=0, j=a.size()-1; i<(a.size()/2)+1; i++, j--) {
      if (a[i] == a[j]) {
	c++;
      }
    }
  }
  else {
    for (i=0, j=a.size()-1; i<a.size()/2; i++, j--) {
      if (a[i] == a[j]) {
	c++;
      }
    }
  }
  cout << c << endl;
  return 0;
}
