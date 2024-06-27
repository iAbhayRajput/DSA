//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool isToeplitz(vector<vector<int>> &mat);

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }

        bool b = isToeplitz(a);

        if (b == true)
            cout << "true";
        else
            cout << "false";

        cout << endl;
    }
    return 0;
}


bool isToeplitz(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    
    // Check each element except for the first row and the first column
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            // If any element doesn't match its top-left neighbor, return false
            if (mat[i][j] != mat[i-1][j-1]) {
                return false;
            }
        }
    }
    
    return true; // If all elements match the criteria, return true
}
}
}

