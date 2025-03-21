#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        string temp=s1;
        int count=1;
        while(s1.size()<s2.size()){
            s1=s1+temp;
            count++;
        }
        if(s1.find(s2)!=-1) return count;
        s1=s1+temp;
        count++;
        if(s1.find(s2)!=-1) return count;
        return -1;
    }
};

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        string A, B;
        getline(cin, A);
        getline(cin, B);

        Solution ob;
        cout << ob.minRepeats(A, B) << endl;
    }
    return 0;
}
