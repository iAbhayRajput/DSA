#include <bits/stdc++.h>
using namespace std;


    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        int i=0,j=0,n=a.size(),m=b.size();
        vector<int> ans;
        while(i<n || j<m){
            int num1 = i<n?a[i]:INT_MAX;
            int num2 = j<m?b[j]:INT_MAX;
            if(num1<num2){
                ans.push_back(num1);
                i++;
            }
            else if(num2<num1){
                ans.push_back(num2);
                j++;
            }
            else{
                ans.push_back(num1);
                i++;
                j++;
            }
        }
        return ans;
    }

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
