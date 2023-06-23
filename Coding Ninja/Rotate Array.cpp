#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin >> n;
    deque <long long int> dq;
    for (int i=0; i<n; i++) {
        long long int x;
        cin >> x;
        dq.push_back(x);
    } 
    int k;
    cin >> k;

    for (int i=0; i<k; i++) {
        dq.push_back(dq.front());
        dq.pop_front();
    }

    for (auto i : dq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
