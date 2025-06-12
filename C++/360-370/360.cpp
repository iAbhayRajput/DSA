class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        int n = arr.size();
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                vec[i] = INT_MAX; 
            } else {
                vec[i] = abs(arr[i] - x);
            }
        }

        vector<int> ans;
        while (k--) {
            int minDist = INT_MAX;
            int chosenIdx = -1;

            for (int i = 0; i < n; i++) {
                if (vec[i] < minDist) {
                    minDist = vec[i];
                    chosenIdx = i;
                } else if (vec[i] == minDist && arr[i] > arr[chosenIdx]) {
                    chosenIdx = i;
                }
            }

            if (chosenIdx != -1) {
                ans.push_back(arr[chosenIdx]);
                vec[chosenIdx] = INT_MAX; 
            }
        }

        return ans;
    }
};
