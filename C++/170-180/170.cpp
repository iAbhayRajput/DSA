#include <bits/stdc++.h>
using namespace std;

    int maximumProfit(vector<int> &prices) {
        int n=prices.size(),buy=prices[0],profit=0;
        for(int i=1;i<n;i++){
            if(prices[i]<=buy){
                buy=prices[i];
            }
            else{
                profit=max(profit,prices[i]-buy);
            }
        }
        return profit;
    }

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> prices;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            prices.push_back(number);
        }

        Solution ob;
        int ans = ob.maximumProfit(prices);
        cout << ans << endl;
    }
    return 0;
}
