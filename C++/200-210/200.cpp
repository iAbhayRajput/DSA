#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  bool matSearch(vector<vector<int>> &mat, int x) {
        int n=mat.size(), m=mat[0].size();
        int i=0, j=m-1;
        while(i<n && j>=0){
            if(mat[i][j]==x) return true;
            
            if(mat[i][j]>x) j--;
            else i++;
        }
        return false;
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));
        int x;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }
        cin >> x;
        Solution ob;
        bool an = ob.matSearch(matrix, x);
        if (an)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}