class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        sort(b.begin(), b.end());
        vector<int> ans;
        for(auto &e : a){
            ans.push_back(upper_bound(b.begin(), b.end(), e) - b.begin());
        }
        return ans;
    }
};
