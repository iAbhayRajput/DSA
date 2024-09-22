#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int lps(string str) {
        int i=1,j=0,n=str.length();
        vector<int> storeLength(n,0);
        while(i<n){
            if(str[i]==str[j])storeLength[i++]=++j;
            else{
                if(j>0)j=storeLength[j-1];
                else i++;
            }
        }
        return storeLength[n-1];
    }
};

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}
