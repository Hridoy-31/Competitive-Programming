/* 
If we see reversing or other operations inside parentheses, 
then it's highly likely that stack will get used.
*/

string solution(string inputString) {
    // for keeping the splitted part of
    // string with '('
    vector <string> temp;
    
    // the answer that we will return
    string answer = "";
    
    for (int i=0; i<inputString.size(); i++) {
        if (inputString[i] == '(') {
            // After getting '(', we are starting
            // answer from blank. Keeping the
            // previous part in temp
            temp.push_back(answer);
            answer = "";
        }
        else if (inputString[i] == ')') {
            reverse(answer.begin(), answer.end());
            // Adding the reversed part with the
            // latest segment from temp that got
            // splitted by '('.
            answer = temp.back() + answer;
            // and removing the latest spillted part
            // out from the temp.
            temp.pop_back();
        }
        else {
            answer += inputString[i];
        }
    }
    return answer;
}
