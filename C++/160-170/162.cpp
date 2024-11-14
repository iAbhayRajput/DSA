#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        int j=0,n=arr.size();
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            if(i>=k){
                arr[j++]=pq.top();
                pq.pop();
            }
        }
        while(!pq.empty()){
            arr[j++]=pq.top();
            pq.pop();
        }
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        obj.nearlySorted(arr, k);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        // cout << "~" << endl;
    }
    return 0;
}
