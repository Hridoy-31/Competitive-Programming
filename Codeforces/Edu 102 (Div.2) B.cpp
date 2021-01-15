#include <bits/stdc++.h>
using namespace std;

vector <int> ar;
vector <long long int> bt;
 
set <long long int> fn;
 
int gcd(int a, int b) {
  if(a==0)
    return b;
  return(gcd(b%a,a));
}

int main() {
  int q;
  cin >> q;
  while (q--) {
    string s,t;
    cin >> s;
    cin >> t;
    if (s.length() < t.length()) {
      string tmp = t;
      t = s;
      s = tmp;
    }

    int fl = 0;
    int len = t.length();

    for(int i=0; i<s.length(); i+=len) {
      if (s.substr(i,len) != t) {
        fl = 1;
        break;
      }
    }

    if (fl) {
      int tmp = 0;
      string ans = "";
      for(int i=1; i<t.length(); i++) {
        tmp = 0;
        string sub = t.substr(0,i);

        for(int j=0; j<t.length(); j+=i) {
          if (t.substr(j,i) != sub) {
            tmp = 1;
            break;
          }
        }
        if (!tmp)
        {
          ans = sub;
          break;
        }
      }
      if (ans != "")
      {
        int f = 0;
        int l = ans.length();
        for(int i=0; i<s.length(); i+=l) {
          if (s.substr(i,l) != ans) {
            f = 1;
            break;
          }
        }
        if (f) {
          cout << -1 <<endl;
        }

        else {
          int g = gcd(t.length()/l,s.length()/l);
          int lcm = ((t.length()*s.length())/(l*l))/g;

          for (int i=0; i<lcm; i++) {
            cout << ans;
          }

          cout << endl;
        }
      }
      else {
        cout << -1 <<endl;
      }
    }
     
    else
    {
      cout << s << endl;
    }
  }
  return 0;
}
