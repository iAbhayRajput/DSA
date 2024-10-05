#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
           long long ans = 1;
        for(int x:arr){
            if(x>ans)return ans;
            ans+=x;
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        auto ans = ob.findSmallest(arr);
        cout << ans << "\n";
    }
    return 0;
}
