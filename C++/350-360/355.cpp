class Solution {
  public:
    int dfs(int node,int dest,vector<vector<int>>&adj,vector<int>&dp){
        if(node==dest){
            return 1;
        }
        if(dp[node]!=-1){
            return dp[node];
        }
        int ans=0;
        for(auto it:adj[node]){
            ans+=dfs(it,dest,adj,dp);
        }
        return dp[node]=ans;
    }
    int countPaths(vector<vector<int>>& edges, int V, int src, int dest) {
        vector<int>dp(V,-1);
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        
        return dfs(src,dest,adj,dp);
    }
};
