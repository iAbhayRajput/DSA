#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
void rev(vector<int> &arr,int i,int j){
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d=d%n;
        rev(arr,0,d-1);
        rev(arr,d,n-1);
        rev(arr,0,n-1);
    }
};

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        // calling rotateArr() function
        ob.rotateArr(arr, d);

        // printing the elements of the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
