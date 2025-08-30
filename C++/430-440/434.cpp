class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
    int n = mat.size();
    int cand = 0;

    for (int i = 1; i < n; i++) {
        if (mat[cand][i] == 1) {
            cand = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i != cand) {
            if (mat[cand][i] == 1) return -1;
            if (mat[i][cand] == 0) return -1;
        }
    }
    return cand;
    }
};
