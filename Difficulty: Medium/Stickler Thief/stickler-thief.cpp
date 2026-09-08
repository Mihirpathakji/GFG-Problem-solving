class Solution {
  public:
    
    int solve(int i , vector<int>& arr,vector<int>&dp,int n ) {
        
        if(i>=n) {
            return 0;
        }
        
        if(dp[i] != -1) {
            return dp[i]; //11.
        }
        
        int one_poss = arr[i] + solve(i+2,arr,dp,n);// 2.6. // 11.
        
        int second_poss = solve(i+1,arr,dp,n);//0.11.2.
        
        return dp[i] = max(one_poss,second_poss);//11.11.
        
    }
  
  
    int findMaxSum(vector<int>& arr) {

        int n = arr.size();
        
        int i = 0;
        
        vector<int>dp(n+1,-1);
        
        return solve(i,arr,dp,n);
        

        //TC : O(n)
        //SC : O(n) 
        
    }
};