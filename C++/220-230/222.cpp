#include <bits/stdc++.h>
using namespace std;

class Solution {

  public:
    int maxWater(vector<int> &arr) {
        int s=0,e=arr.size()-1,maxarea=0,area=0;
        while(s<e){
            area=min(arr[s],arr[e])*(e-s);
            maxarea=max(maxarea,area);
            if(arr[s]<arr[e]) s++;
            else e--;
        }
        return maxarea;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}
