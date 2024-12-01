#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
            vector<int>freq(26,0);
            for(int i=0;i<s.size();i++){
                freq[s[i]-'a']++;
            }
            for(int i=0;i<s.size();i++){
                if(freq[s[i]-'a']==1) return s[i];
            }
            return '$';
            
    }
};

int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
