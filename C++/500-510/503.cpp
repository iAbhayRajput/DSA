class Solution {
  public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        
        int buy = -arr[0]; 
        int sell = 0;  
        int skip = 0;   
        
        for (int i=1; i<n; i++) {
            int price = arr[i];
            
            int prvBuy = buy;
            int prvSell = sell;
            int prvSkip = skip;
            
            buy = max(prvBuy, prvSkip-price);
            sell = prvBuy+price;    
            skip = max(prvSkip, prvSell);
        }
        
        return max(sell, skip);
    }
};
