#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  vector<vector<int>> insertInterval(vector<vector<int>> &arr,
                                       vector<int> &x) {
        vector<vector<int>>ans;
        int n=arr.size();
        int i=0;
        while(i<n && arr[i][1]<x[0]){
            ans.push_back(arr[i]);
            i++;
        }
        while(i<n && arr[i][0]<=x[1]){
            x[0]=min(x[0], arr[i][0]);
            x[1]=max(x[1], arr[i][1]);
            i++;
        }
        ans.push_back(x);
        while(i<n){
            ans.push_back(arr[i]);
            i++;
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        vector<int> newInterval(2);
        cin >> newInterval[0] >> newInterval[1];

        Solution obj;
        vector<vector<int>> ans = obj.insertInterval(intervals, newInterval);
        cout << "[";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[" << ans[i][0] << ',' << ans[i][1] << ']';
            if (i != (ans.size() - 1))
                cout << ",";
        }
        cout << "]" << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
