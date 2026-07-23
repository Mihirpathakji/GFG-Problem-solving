class Solution {
  public:
    int rotationCount(int r, int d) {
        
        int ans = 0;
        int first = 0;
        int second = 0;
        
        while(max(r,d)) {
            
            first = r%10;
            second = d%10;
            
            r/=10;
            d/=10;
            
            ans += min(abs(first-second),10-abs(first-second));
            
        }
        
        return ans;
    
        //TC : O(log(max(r,d)))
        //SC : O(1)
        
    }
};