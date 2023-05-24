bool solution(string inputString) {
    unordered_map<char, int> charCount;
    
    for (auto c : inputString) {
        charCount[c]++;
    }
    
    int oddCount = 0;
    
    for (auto it : charCount) {
        if (it.second % 2 != 0) {
            oddCount++;
        } 
    }
    
    if (oddCount > 1) {
        return false;
    }
    else {
        return true;
    }
}
