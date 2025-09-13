class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        sort(x.rbegin(), x.rend());
        sort(y.rbegin(), y.rend());

        int i = 0, j = 0;
        int horizontal_segments = 1, vertical_segments = 1;
        int total_cost = 0;

        while (i < x.size() && j < y.size()) {
            if (x[i] >= y[j]) {
                total_cost += x[i] * horizontal_segments;
                vertical_segments++;
                i++;
            } else {
                total_cost += y[j] * vertical_segments;
                horizontal_segments++;
                j++;
            }
        }

        while (i < x.size()) {
            total_cost += x[i] * horizontal_segments;
            vertical_segments++;
            i++;
        }

        while (j < y.size()) {
            total_cost += y[j] * vertical_segments;
            horizontal_segments++;
            j++;
        }

        return total_cost;
    }
};
