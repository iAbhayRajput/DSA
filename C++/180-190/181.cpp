#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minChar(string& s) {
        string rev=s;
        reverse(rev.begin(),rev.end());
        string combine=s+ "*"+rev;
        int n=combine.size();
        
        vector<int>lps(n,0);
        for(int i=1,len=0;i<n;){
            if(combine[i]==combine[len]) lps[i++]=++len;
            else if(len) len=lps[len-1];
            else lps[i++]=0;
        }
        return s.size()-lps[n-1];
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}