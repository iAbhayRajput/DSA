#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        vector<int> freq(26,0);
        for(auto x:s1)freq[x-'a']++;
        for(auto x:s2)freq[x-'a']--;
        for(int x:freq)if(x!=0)return false;
        return true;
    }
};

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}
