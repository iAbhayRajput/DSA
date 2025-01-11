#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        vector<bool>vis(26,false);
        int maxi=INT_MIN;
        int l=0,r=0;
        while(r<s.size()){
            while(vis[s[r]-'a']==true){
                vis[s[l]-'a']=false;
                l++;
            }
            vis[s[r]-'a']=true;
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}