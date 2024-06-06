#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long seriesSum(int n) {
        return static_cast<long long>(n) * (n + 1) / 2;
    }
};

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);

        Solution obj;
        long long res = obj.seriesSum(n);

        cout << res << endl;
    }
    return 0;  // Ensure main returns an int
}
