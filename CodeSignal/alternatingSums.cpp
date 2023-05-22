vector<int> solution(vector<int> a) {
    int sume = 0;
    int sumo = 0;
    for (int i=0; i<a.size(); i++) {
        if (i%2 == 0) {
            sume += a[i];
        }
        else {
            sumo += a[i];
        }
    }
    vector <int> ans;
    ans.push_back(sume);
    ans.push_back(sumo);
    return ans;
}
