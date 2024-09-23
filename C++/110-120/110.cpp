#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
       int n=arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int element = abs(arr[i]);
            if(arr[element-1]<0)ans.push_back(element);
            else arr[element-1]*=-1;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0)ans.push_back(i+1);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
