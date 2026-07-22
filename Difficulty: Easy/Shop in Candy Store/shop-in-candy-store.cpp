class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        
        int min_cost = 0;
        int max_cost = 0;
        
        sort(prices.begin(),prices.end());
        int n = prices.size();
        
        int i = 0;
        int j = n-1;
        
        while(i <= j) {
            min_cost += prices[i];
            j-=k;
            i++;
        }
        
        i = 0;
        j = n-1;
        
        while(j >= i) {
            
            max_cost += prices[j];
            j--;
            i += k;
        }
        
        return {min_cost,max_cost};


    }
};