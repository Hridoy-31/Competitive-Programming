#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,w,x,y,cnt=0;
    cin >> h >> w >> x >> y;
    char a[h+1][w+1];
    for (int i=1; i<=h; i++) {
        for (int j=1; j<=w; j++) {
            cin >> a[i][j];
        }
    }
    int var = x;
    while (var >= 1 && a[var][y] == '.') {
        cnt++;
        var--;
    }
    var = x;
    while (var <= h && a[++var][y] == '.') {
        cnt++;
    }
    var = y;
    while (var >= 1 && a[x][var] == '.') {
        cnt++;
        var--;
    }
    var = y;
    while (var <= w && a[x][++var] == '.') {
        cnt++;
    }
    cout << --cnt << endl;
    return 0;
}
