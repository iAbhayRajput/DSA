#include <iostream>
using namespace std;

class Solution {
public:
    int PalinArray(int a[], int n) {
        for (int i = 0; i < n; i++) {
            int temp = a[i];
            int reversed = 0;
            while (temp > 0) {
                int r = temp % 10;
                reversed = reversed * 10 + r;
                temp /= 10;
            }
            if (reversed != a[i]) {
                return 0;
            }
        }
        return 1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.PalinArray(arr, n) << endl;
    }
    return 0;
}
