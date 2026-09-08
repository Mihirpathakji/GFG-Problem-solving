class Solution {
  public:
    
    int solve(int i , vector<int>& arr,vector<int>&dp,int n ) {
        
        if(i>=n) {
            return 0;
        }
        
        if(dp[i] != -1) {
            return dp[i]; 
        }
        
        int one_poss = arr[i] + solve(i+2,arr,dp,n);
        
        int second_poss = solve(i+1,arr,dp,n);
        
        return dp[i] = max(one_poss,second_poss);
        
        //
        
    }
  
  
    int findMaxSum(vector<int>& arr) {

        int n = arr.size();
        
        int i = 0;
        
        vector<int>dp(n+1,-1);
        
        solve(i,arr,dp,n);
        
        int max_ans = 0;
        
        for(int i = 0;i < n;i++) {
            max_ans = max(max_ans,dp[i]);    
        }        

        return max_ans;

        //TC : O(2^n)
        //SC : O(n) // If some are popped -> less than n -> at max == n
        //elements will be there in the stack at a PARTICULAR INSTANT.
        
    }
};