#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int count = 0;
    vector <int> n;
    for (int i=0; i<10; i++) {
        cin >> a[i];
        n.push_back(a[i]%42);
    }
    sort(n.begin(), n.end());
    for (int i=0; i<10; i++) {
        while (i<9 && n[i]==n[i+1]) {
            i++;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}
