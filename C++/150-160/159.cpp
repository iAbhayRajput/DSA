#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minIncrements(vector<int> arr) {
        sort(arr.begin(), arr.end());
        int ans=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<=arr[i-1]){
                ans+=(arr[i-1]+1)-arr[i];
                arr[i]=arr[i-1]+1;
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
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int ans = ob.minIncrements(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
