vector<string> solution(vector<string> picture) {
    vector <string> v;
    string s (2+picture[0].size(), '*');
    v.push_back(s);
    string temp = "";
    for (int i=0; i<picture.size(); i++) {
        temp += "*";
        for (int j=0; j<picture[0].size(); j++) {
            temp += picture[i][j];
        }
        temp += "*";
        v.push_back(temp);
        temp="";
    }
    v.push_back(s);
    return v;
}
