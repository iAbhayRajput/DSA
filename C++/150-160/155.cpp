#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
   vector<int> findSplit(vector<int>& arr) {
        // code here
        int n = arr.size(), sum=0;
        for(int x:arr)sum+=x;
        if(sum%3)return {-1,-1};
        int requiredSum=sum/3;
        vector<int> ans;
        sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==requiredSum){
                ans.push_back(i);
                if(ans.size()==2)break;
                sum=0;
            }
        }
        if(ans.size()==2)return ans;
        return {-1,-1};
    }
};

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.treePathsSum(root);
        cout << endl;
        cout << "~\n";
    }
    return 0;
}
