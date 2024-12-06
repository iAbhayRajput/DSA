#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find hIndex
int hIndex(vector<int>& citations) {
        int n=citations.size();
        vector<int> freq(n+1);
        for(int i=0;i<n;i++){
            if(citations[i]>=n) freq[n]++;
            else freq[citations[i]]++;
        }
        int Hindex=n;
        int num=freq[n];
        while(num<Hindex){
            Hindex--;
            num+=freq[Hindex];
        }
        return Hindex;
    }
};

int main() {

    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        int result = ob.hIndex(arr);

        cout << result << endl;

        cout << "~" << endl;
    }
    return 0;
}
