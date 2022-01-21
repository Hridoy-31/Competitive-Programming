class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int result=0, previous=0, count=0;
        for (auto s : bank) {
            count = std::count(s.begin(), s.end(), '1');
            if (count != 0) {
                result = result + previous*count;
                previous = count;
            }
        }
        return result;
    }
};
