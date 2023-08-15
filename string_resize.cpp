#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Raihanul Bashir";
    // it reshapes the string to the first six characters.
    s.resize(6);

    string s1 = "Hridoy";
    // it reshapes the string to the first nine characters but only
    // printing characters that are printable. (Ignores NULL characters).
    // When we resize a string to large number of characters that are more than
    // the number of characters in actual string, then the extra characters are
    // filled up with NULL characters. So, when we print the reshaped string, it 
    // seems like the actual string. But remember, extra characters are added and
    // we can't see them because they are NULL characters.

    // s1.resize(9);

    // We can not resize an already resized string until there is no more null 
    // characters. So, we have to fill up the extra space that we resized from
    // the original string with printable characters. After that, we can use 
    // the resize() function.

    // Here, we are resizing the string s1 with 10 spaces. It means giving extra
    // 4 spaces to the original s1 and filling up the extra spaces with '!'.
    s1.resize(10, '!');

    string s2;
    cout << "Print the OS: ";
    getline(cin, s2);

    s2.resize(s2.length()+3, '!');
    cout << s2 << endl;

    return 0;
}