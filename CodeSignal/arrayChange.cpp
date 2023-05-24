int solution(vector<int> inputArray) {
    int c = 0;
    for (int i=0; i<inputArray.size()-1; i++) {
        if (inputArray[i] >= inputArray[i+1]) {
            while (inputArray[i+1] <= inputArray[i]) {
                inputArray[i+1]++;
                c++;
            }
        }
    }
    return c;
}
