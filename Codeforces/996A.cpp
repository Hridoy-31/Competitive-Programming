#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll n;
    cin >> n;
    ll c = 0;
    c = c + n/100;
    c = c + (n%100)/20;
    c = c + ((n%100)%20)/10;
    c = c + (((n%100)%20)%10)/5;
    c = c + ((((n%100)%20)%10)%5);
    cout << c << endl;
    return 0;
}
