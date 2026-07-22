class Solution {
  public:
  
    int findMin(int n) {
        
        int remainder = n%10;//1
        int curr_coins = n/10;//12 
        
        vector<int>vec = {1,2,5};
            
        int i = 2;    
        while(remainder && i >= 0) {
            
            if(remainder >= vec[i]) {
                
                curr_coins += remainder/vec[i];//13
                remainder = (remainder % vec[i]);//0
            }
            
            i--;//1 0 -1
            
        }
        
        return curr_coins;
        
      
      
    }
};