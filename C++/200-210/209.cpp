#include <bits/stdc++.h>

using namespace std;

 class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
       int n = arr.size();
       unordered_map<int,int>mp;
       for(auto it:arr) mp[it]++;
       int ans=0;
       for(int i=0;i<n;i++)
       {
           int x=arr[i];
           if (mp.find(x-1)==mp.end()){
               while(mp.find(x)!=mp.end()){
               x++;}
               ans=max(ans,x-arr[i]);
       }
           }
       return ans;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}
