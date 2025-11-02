class Solution {
  public:
    int maxEdgesToAdd(int n, vector<vector<int>>& edges) {
        return (n*n-n)/2-edges.size();
    }
};
