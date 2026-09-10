class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {

        
        int n = arr.size();    
        int target = sum;
        
        //Bottom UP : 
        
        int max_Sum = 0;
        
        for(int i = 0;i < n;i++) {
            max_Sum += arr[i];
        }
        
        vector<vector<int>>dp(n,vector<int>(max(max_Sum+1,target+1),0));
        //assume that till this index this target sum can't be 
        //achived.
        
        //Base case : 
        
        //1.For index.
        
        dp[0][arr[0]] = 1;
        
        //2.For target.
        
        for(int i = 0;i < n;i++) {
            dp[i][0] = 1;
        }
        
        for(int index = 1;index < n;index++) {
            
            for(int target = 1;target <= sum;target++) {
                dp[index][target] = (dp[index-1][target] || (arr[index] <= target && dp[index-1][target-arr[index]]));
            }
        }
        
        return dp[n-1][sum];

    }
};