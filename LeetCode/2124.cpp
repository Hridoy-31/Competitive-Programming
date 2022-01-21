class Solution {
public:
    bool checkString(string s) {
        string s1;
        s1 = s;
        sort(s1.begin(), s1.end());
        if (s == s1) {
            return true;
        }
        else {
            return false;
        }
    }
};
