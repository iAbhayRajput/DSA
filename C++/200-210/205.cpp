#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
 int countPairs(vector<int> &arr, int target) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<arr.size();i++){
            int second=target-arr[i];
            count+=mp[second];
            mp[arr[i]]++;
        }
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);

        cout << res << endl << "~" << endl;
    }
    return 0;
}
