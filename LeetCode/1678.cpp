class Solution {
public:
    string interpret(string command) {
        string final;
        for (int i=0; i<command.size(); i++) {
            if (command[i] == 'G') {
                final.push_back('G');
            }
            else if (command[i]=='(' && command[i+1]==')') {
                final.push_back('o');
                i++;
            }
            else if (command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')') {
                final.push_back('a');
                final.push_back('l');
                i = i + 3;
            }
        }
        return final;
    }
};
