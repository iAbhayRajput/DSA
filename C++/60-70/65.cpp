#include <bits/stdc++.h>
using namespace std;




class Solution {
  public:
    int Maximize(vector<int> arr) {
        sort(arr.begin(), arr.end());
        long long int ans=0;
        int mod=1e9+7;
        for(int i=0;i<arr.size();i++){
            ans+=1LL*i*arr[i];
            ans%=mod;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
