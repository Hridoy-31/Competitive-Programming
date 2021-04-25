/*
Given the string, check if it is a palindrome.

Example

For inputString = "aabaa", the output should be
checkPalindrome(inputString) = true;
For inputString = "abac", the output should be
checkPalindrome(inputString) = false;
For inputString = "a", the output should be
checkPalindrome(inputString) = true.

Input/Output
[execution time limit] 0.5 seconds (cpp)
[input] string inputString
A non-empty string consisting of lowercase characters.

Guaranteed constraints:
1 ≤ inputString.length ≤ 105.

[output] boolean
true if inputString is a palindrome, false otherwise.
*/

bool checkPalindrome(string inputString) {
    string s;
    for (int i=inputString.size()-1; i>=0; i--) {
        s.push_back(inputString[i]);
    }
    if (s == inputString) {
        return true;
    }
    else {
        return false;
    }
}
