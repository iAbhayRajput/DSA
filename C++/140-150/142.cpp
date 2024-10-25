#include <bits/stdc++.h>
using namespace std;

class Solution {

  public:
      vector<int> alternateSort(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        sort(arr.begin(),arr.end());
        int i=0,j=n-1;
        for(int k=0;k<n;k++){
            if(k%2)ans[k]=arr[i++];
            else ans[k]=arr[j--];
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
        Solution obj;
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
