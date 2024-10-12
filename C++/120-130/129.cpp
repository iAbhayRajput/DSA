#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int pairWithMaxSum(vector<int>& arr) {
        int maxi=-1;
        for(int i=1;i<arr.size();i++){
            maxi=max(maxi,arr[i]+arr[i-1]);
        }
        return maxi;
    }
};

int main() {
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> a;
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        int res = obj.pairWithMaxSum(a);
        cout << res << endl;
    }
}
// } Driver Code Ends
