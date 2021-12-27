#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin >> d;
    cout << d << endl;
    int h,ff,tt,te,f,t,o;
    h = d/100; // 5
    cout << h << " nota(s) de R$ 100,00" << endl;
    d = d-(h*100);
    ff = d/50;
    cout << ff << " nota(s) de R$ 50,00" << endl;
    d = d-(ff*50);
    tt = d/20;
    cout << tt << " nota(s) de R$ 20,00" << endl;
    d = d-(tt*20);
    te = d/10;
    cout << te << " nota(s) de R$ 10,00" << endl;
    d = d-(te*10);
    f = d/5;
    cout << f << " nota(s) de R$ 5,00" << endl;
    d = d-(f*5);
    t = d/2;
    cout << t << " nota(s) de R$ 2,00" << endl;
    d = d-(t*2);
    o = d/1;
    cout << o << " nota(s) de R$ 1,00" << endl;
    d = d-(o*1);
    return 0;
}
