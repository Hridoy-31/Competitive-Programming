/*
Given an array of strings, return another array containing all of its longest strings.

Example
For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
allLongestStrings(inputArray) = ["aba", "vcd", "aba"].

Input/Output
[execution time limit] 0.5 seconds (cpp)
[input] array.string inputArray
A non-empty array.

Guaranteed constraints:
1 ≤ inputArray.length ≤ 10,
1 ≤ inputArray[i].length ≤ 10.

[output] array.string
Array of the longest strings, stored in the same order as in the inputArray.
*/

vector<string> allLongestStrings(vector<string> inputArray) {
    int s = 0;
    for (int i=0; i<inputArray.size(); i++) {
        if (inputArray[i].size() > s) {
            s = inputArray[i].size();
        }
    }
    vector <string> final;
    for (int i=0; i<inputArray.size(); i++) {
        if (inputArray[i].size()==s) {
            final.push_back(inputArray[i]);
        }
    }
    return final;
}
