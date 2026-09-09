class Solution {
  public:
  
    int minCost(vector<int>& height) {

        int n = height.size();
        
        int first = 0;//dp[i+2] 0.
        
        if(n == 1) {
            return 0;
        }
        
        int second = abs(height[n-1]-height[n-2]);//dp[i+1] //30.
        int third = 0;//dp[i]
        
        if(n == 2) {
            return abs(height[n-1]-abs(height[n-2]));
        }
        
        for(int i = n-3;i >=0;i--) {
            third =  min( abs(height[i]-height[i+1]) + second  , abs(height[i]-height[i+2]) +first);//10.20.
            first = second;//30.10
            second = third;//10.20.40.
        }
        
        return third;
        
        //TC : O(n)
        //SC : O(1)

    }
};