#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    long long findNth(long long n) {
       long long ans=0;
        long long p=1;
        
        while(n>0){
            ans+=p*(n%9);
            n/=9;
            p*=10;
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        Solution obj;
        ans = obj.findNth(n);
        cout << ans << endl;
    }
}
