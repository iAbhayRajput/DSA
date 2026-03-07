class Solution {
  public:
    int noOfWays(int m, int n, int x) {
        
        vector<long long> dp(x+1,0), temp(x+1,0);
        
        dp[0] = 1;
        
        for(int dice = 1; dice <= n; dice++){
            
            fill(temp.begin(), temp.end(), 0);
            
            for(int sum = 1; sum <= x; sum++){
                
                for(int face = 1; face <= m && face <= sum; face++){
                    
                    temp[sum] += dp[sum - face];
                    
                }
            }
            
            dp = temp;
        }
        
        return dp[x];
    }
};
