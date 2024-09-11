#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        long long ans = 0;
        priority_queue<long long,vector<long long>, greater<long long>> pq;
        for(auto x:arr)pq.push(x);
        while(pq.size()!=1){
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            long long total = first+second;
            pq.push(total);
            ans+=total;
        }
        return ans;
    }
};


int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}
