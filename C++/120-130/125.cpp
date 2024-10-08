#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int Largest= INT_MIN;
        int SecondLargest=INT_MIN;
        int temp= INT_MIN;
        for (auto& number : arr)
        {   if (number>Largest){
                SecondLargest=Largest;
                Largest=number;
            }
             else if (number>SecondLargest)SecondLargest=number;
        }
    return Largest+SecondLargest  ;
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
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
