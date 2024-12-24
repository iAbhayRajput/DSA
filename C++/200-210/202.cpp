#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n=mat.size(), m=mat[0].size();
        int lo=0, hi=n*m-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            
            int row=mid/m, col=mid%m;
            
            if(mat[row][col]==x) return true;
            else if(mat[row][col]>x) hi=mid-1;
            else lo=mid+1;
        }
        return false;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}