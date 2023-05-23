bool solution(vector<int> a, vector<int> b) {
    vector <int> sorta = a;
    vector <int> sortb = b;
    sort(sorta.begin(), sorta.end());
    sort(sortb.begin(), sortb.end());
    if (sorta == sortb) {
        int c = 0;
        for (int i=0; i<a.size(); i++) {
            if (a[i] != b[i]) {
                c++;
            }
        }
        if (c > 2) {
                return false;
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}
