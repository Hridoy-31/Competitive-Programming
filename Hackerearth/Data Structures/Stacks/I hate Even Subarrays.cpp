#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std; 

void solve(){
}
int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s,ans="";
        cin >> s;
        stack<char>stk;

        for (int i=0; i<s.size(); i++) {
            if(stk.empty()) {
                stk.push(s[i]);
            }
            else if (stk.top() == s[i]) {
                stk.pop();
            }
            else {
                stk.push(s[i]);
            }
        }

        if (!stk.empty()) {
            while(!stk.empty()) {
                ans.push_back(stk.top());
                stk.pop();
            }
            for (int i=ans.size()-1; i>=0; i--) {
            cout << ans[i];
            }
            cout << endl;
        }
        else {
            cout << "KHALI" << endl;
        }
    }
    return 0;
}
