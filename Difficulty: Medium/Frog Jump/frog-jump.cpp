class Solution {
  public:
    
    int solve(int i,vector<int>&height,int n,vector<int>&dp) {
        
            
        if(dp[i]!=-1) {
            return dp[i];
        }
        
        if(i == n-1) {
            return dp[i] = 0;
        }
        
        else if(i == n-2) {
            return dp[i] = abs(height[n-2]-height[n-1]);
        }
    
        return dp[i] = min(abs(height[i]-height[i+1]) + solve(i+1,height,n,dp) , abs(height[i]-height[i+2]) + solve(i+2,height,n,dp));
        
    }
    
  
    int minCost(vector<int>& height) {

        int n = height.size();
        
        int i = 0;
        
        vector<int>dp(n+1,-1);
        
        return solve(i,height,n,dp);

    }
};