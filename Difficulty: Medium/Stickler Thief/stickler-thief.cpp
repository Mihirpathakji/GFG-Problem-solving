class Solution {
  public:
  
    int findMaxSum(vector<int>& arr) {

        int n = arr.size();
        
        int i = 0;
        
        //Bottom Up : 
        
        vector<int>dp(n+1,-1);
        
        //We do the job in one for loop.First solve the smallest subproblem
        //Thereby keep going upwards and solve the bigger problems.
        //Here dp[n-1] is the smallest subproblem.
        
        dp[n-1] = arr[n-1];//2.
        
        for(int i = n-2;i >= 0;i--) {
            
            if(i+2 >=n) {
                dp[i] = max(arr[i],dp[i+1]);
            }
            else {
                dp[i] = max(arr[i] + dp[i+2],dp[i+1]);
            }
            
        }
        
        return dp[0];
        

        //TC : O(n)
        //SC : O(n) 
        
    }
};