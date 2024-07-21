#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int findMaxProduct(vector<int>& arr) {
        const int MOD = 1000000007;
        long long prod = 1;
        int maxNegative = INT_MIN;
        int countNeg = 0;
        int countZero = 0;
        bool hasNonZero = false;

        // Special case: single element array
        if (arr.size() == 1) {
            return arr[0];
        }

        for (int num : arr) {
            if (num == 0) {
                countZero++;
                continue;
            }
            if (num < 0) {
                countNeg++;
                maxNegative = max(maxNegative, num);
            }
            prod = (prod * num) % MOD;
            hasNonZero = true;
        }

        // Handle the case where all elements are zero
        if (!hasNonZero) return 0;

        // Handle the case where the product is negative
        if (prod < 0) {
            if (countNeg % 2 != 0) {
                // Odd number of negatives, need to exclude the largest negative to maximize product
                prod = (prod / maxNegative + MOD) % MOD;
            }
        }

        // Adjust for the cases where all are zeroes except one negative number
        if (countNeg == 1 && countZero == arr.size() - 1) {
            return 0;
        }

        return prod;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}
