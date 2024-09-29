#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
                int ans = 0;
        for(auto x : arr) {
            ans += (x + k - 1) / k;
        }
        return ans;
    }
};

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.totalCount(k, arr);
        cout << res << endl;
    }
    return 0;
}
