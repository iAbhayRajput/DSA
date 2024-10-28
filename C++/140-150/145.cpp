#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
 vector<int> removeDuplicate(vector<int>& arr) {
        int mm[101]={0};
        vector<int> ans;
        for(int x:arr){
            if(!mm[x]){
                ans.push_back(x);
                mm[x]=1;
            }
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
        vector<int> ans = obj.removeDuplicate(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
