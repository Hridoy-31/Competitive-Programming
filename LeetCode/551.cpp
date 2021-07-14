class Solution {
public:
    bool checkRecord(string s) {
        int late=0, absent=0;
        for (int i=0; i<s.size(); i++) {
            if (s[i] == 'A') {
                absent++;
            }
            else if (s[i]=='L' && s[i+1]=='L' && s[i+2]=='L') {
                late++;
            }
        }
        if (absent < 2 && late == 0) {
            return true;
        } 
        else {
            return false;
        }
    }
};
