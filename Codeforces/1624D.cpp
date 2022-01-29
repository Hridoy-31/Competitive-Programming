#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector <int> ch(26);
        for (int i=0; i<n; i++) {
            ch[s[i]-'a']++;
        }
        int p=0, od=0;
        for (int i=0; i<26; i++) {
            p = p + (ch[i]/2);
            od = od + (ch[i]%2);
        }
        int result = 2*(p/k);
        od = od + 2*(p%k);
        if (od >= k) {
            result++;
        }
        cout << result << endl;
    }
    return 0;
}
