#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
       int getSingle(vector<int>& arr) {
        int ans = 0;
        for(int x:arr)ans^=x;
        return ans;
    }
};

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getSingle(arr);
        cout << res << endl;
    }
    return 0;
}
