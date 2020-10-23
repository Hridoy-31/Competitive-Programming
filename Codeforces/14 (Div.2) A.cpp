#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i,j,n,m,istart=55,iend=0,jstart=55,jend=0;
  cin >> n >> m;
  char s[n][m];

  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      cin >> s[i][j];
      if (s[i][j] == '*') {
	istart = min(i,istart);
	iend = max(i,iend);
	jstart = min(j, jstart);
	jend = max(j, jend);
      }
    }
  }

  for (i=istart; i<=iend; i++) {
    for (j=jstart; j<=jend; j++) {
      cout << s[i][j];
    }
    cout << endl;
  }

  return 0;
}
