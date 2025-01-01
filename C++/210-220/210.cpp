#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
    vector<vector<string>> ans;
    unordered_map<string,vector<string>> mm;
    for(string x:arr){
        string temp = x;
        sort (temp.begin(),temp.end());
        mm[temp].push_back(x);
    }
    for (auto x:mm){
        ans.push_back(x.second);
    }
    return ans;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}
