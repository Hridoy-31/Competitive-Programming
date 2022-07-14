// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        int row[N], col[M], sum;
        for (int i=0; i<N; i++) {
            sum = 0;
            for (int j=0; j<M; j++) {
                sum += A[i][j];
            }
            row[i] = sum;
        }
        for (int i=0; i<M; i++) {
            sum = 0;
            for (int j=0; j<N; j++) {
                sum += A[j][i];
            }
            col[i] = sum;
        }
        for (int i=0; i<min(N,M); i++) {
            if (row[i] != col[i]) {
                return 0;
            }
        }
        return 1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        Solution ob;
        cout << ob.sumOfRowCol(N, M, A) << "\n";
    }
}  // } Driver Code Ends
