
class Solution {
  public:
    int countWays(int n) {
        
        //1.Recursion:
        
        if(n <= 1)
        {   
            return 1;
        }
        if(n == 2)
        {
            return n;
        }
        
        return countWays(n-1) + countWays(n-2) + countWays(n-3);
            
        
    }
};
