#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=i+1){
                swap(arr[i],arr[arr[i]-1]);
                count++;
                i--;
            }
            if(count>2)return false;
        }
        return count==2|count==0;
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
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}
