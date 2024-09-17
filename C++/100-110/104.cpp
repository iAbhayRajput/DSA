#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int longest=arr[n-1];
        int shortest=arr[0];
        int ans=longest-shortest;
        for(int i=1;i<n;i++){
            longest=max(arr[n-1]-k,arr[i-1]+k);
            shortest=min(arr[0]+k,arr[i]-k);
            if(shortest<0) continue;
            ans=min(ans,longest-shortest);
        }
        return ans;    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
