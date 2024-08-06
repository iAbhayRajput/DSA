#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000




class Solution {
  public:
    int isValid(string s) {
    int n=s.size();
    if(n<7) return 0; // invalid size
    int dots=0;
    // This one is added to combat new test cases
    // for checking continous dots
    for(int i=0;i<n;i++){
        if(i>0 && s[i]==s[i-1] && s[i]=='.') return 0; // 2 dots continous - invalid
        if(s[i]=='.') dots++;
    }
    if(dots!=3) return 0; // only 3 dots needed
    
    
    string num=""; //number ke liye
    for(int i=0;i<=n;i++){ // i==n for last substring
        if(s[i]=='.'||i==n){
            if(num.size()==0 || (num[0]=='0' && num.size()>1) || num.size()>3) return 0;
            int number=stoi(num);
            if(number>255) return 0;
            num="";
        }
        else num+=s[i];
    }
    return 1;
    }
};

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
