class Solution {
  public:
    int findMin(int n) {

        vector<int>arr = {1,2,5,10};
        int j = 3;
        int min_coins = 0;
        
        while(j>=0) {
                
            min_coins += n/arr[j];
            n = n%arr[j];
            
            j--;
        }
    
        return min_coins;
        
    }
};