#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
       void segregate0and1(vector<int> &arr) {
        int start =0;
        int end=arr.size()-1;
        while(start<end){
            if(arr[start]==0)
            start++;
            else if(arr[end]==1)
            end--;
            else{
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
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
        int n = arr.size();
        Solution ob;
        ob.segregate0and1(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
