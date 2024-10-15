#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        unordered_map<int,int> mm;
        int ans=0,sum=0;
        for(int x:arr){
            sum+=x;
            if(sum==tar)ans++;
            if(mm.find(sum - tar) != mm.end())ans+=mm[sum-tar];
            mm[sum]++;
        }
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
        string ks;
        getline(cin, ks);
        int tar = stoi(ks);
        Solution obj;
        int res = obj.subArraySum(arr, tar);
        cout << res << endl;
    }
    return 0;
}
