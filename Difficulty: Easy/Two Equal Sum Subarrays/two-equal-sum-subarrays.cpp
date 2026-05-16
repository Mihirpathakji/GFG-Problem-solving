class Solution {
  public:
    bool canSplit(vector<int>& arr) {
      
      double total_sum = arr[0];
      double n = arr.size();
      vector<double>prefix(n);
      prefix[0]=arr[0];
      
      for(int i = 1 ; i < n; i ++)
      { 
          prefix[i] = prefix[i-1] + arr[i];
          total_sum += arr[i];  
      }
      
      for(int i = 0 ; i < n; i++)
      {
        if(total_sum/2 == prefix[i])
        {
            return true;
        }
      }
      
      return false;
        
    }
};