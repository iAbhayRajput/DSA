#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
    int n = arr.size();
    int k = 1; // Start with the first operation
    while (n > 1) {
    // Rotate the vector clockwise by 1
    int last = arr.back();
    arr.pop_back();
    arr.insert(arr.begin(), last);
    // Calculate the index to delete
    int deleteIndex = n - k;
    if (deleteIndex < 0) {
    deleteIndex = 0;
    }
    // Delete the kth element from the last
    arr.erase(arr.begin() + deleteIndex);
    // Update the size of the array
    n--;
    // Increment k for the next operation
    k++;
    }
    // The last remaining element
    return arr[0];
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
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}
