#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[26]={0};
    for (int i=0; i<s.size(); i++) {
        int p = int(s[i]);
        p = p - 97;
        a[p] = 1;
    }
    
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        string k;
        cin >> k;
        int c=0;
        for(int j=0; j<k.size(); j++) {
            int q = int(k[j]);
            q = q - 97;
            if (a[q] == 0) {
                c++;
            }
        }
        if(c>0) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
    
    return 0;
}
