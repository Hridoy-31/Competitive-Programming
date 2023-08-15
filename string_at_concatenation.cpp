#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Mode";

    s.at(0) = 'C';
    // cout << s << endl;

    string s2 = "is";
    string s3 = "awesome";

    // for string concatenation, character can also be added with + operator.
    string s4 = s + " " + s2 + " " + s3 + '!';
    cout << s4 << endl;

    return 0;
}