#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;
    cin >> h >> m;
    if (h == 0) {
        h = 24;
        long long t = h*3600 + m*60 - 45*60;
        int hour = t/3600;
        int minute = abs(t-(3600*hour))/60;
        cout << hour << " " << minute << endl;
    }
    else {
        long long t = h*3600 + m*60 - 45*60;
        int hour = t/3600;
        int minute = abs(t-(3600*hour))/60;
        cout << hour << " " << minute << endl;
    }
    
    return 0;
}
