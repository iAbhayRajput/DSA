#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double power(double b, int e) {
        if (e==0) return 1;
        if (e<0) return 1/power(b,-e);
        double tempans = power(b,e/2);
        
        if(e%2==0){
            return tempans*tempans;
        }
        else{
            return b*tempans*tempans;
        }
    }
};

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double b;
        cin >> b;
        int e;
        cin >> e;
        Solution ob;
        cout << ob.power(b, e) << endl;
        cout << "~" << endl;
    }

    return 0;
}
