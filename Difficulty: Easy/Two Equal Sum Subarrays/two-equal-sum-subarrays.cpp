class Solution {
  public:
    bool canSplit(vector<int>& arr) {
    
        vector<double>prefix(arr.size());
        prefix[0] = arr[0];
        for(int i = 1;i < arr.size(); i++)
        {
            prefix[i] = prefix[i-1] + arr[i]; 
        }
        
        //[3 4 5 7]
        
        for(int i = 0 ; i< arr.size() -1 ; i++)
        {
            if(prefix[i] == prefix[arr.size()-1]/2)
            {
                return true;
            }
        }
   
        return false;
    }
};