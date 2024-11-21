#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int mx1=INT_MIN,mx2=INT_MIN;
        for(int x:arr){
            if(x>mx1){
                mx2=mx1;
                mx1=x;
            }
            else if(x>mx2 && x!=mx1)mx2=x;
        }
        return mx2!=INT_MIN?mx2:-1;
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
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}