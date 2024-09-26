#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
               int cnt=0;
        int n=arr.size();
        int ans=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                cnt++;
                ans=max(ans,cnt);
            }
            else{
                cnt=0;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.maxStep(arr) << endl;
    }
    return 0;
}
