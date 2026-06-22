class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        
        int n = arr.size();
        vector<int>ans(2);
            
        int low = 0;
        int high = n-1;
        
        
        //for the left most occrance.
        int ans1 = -1;
        int ans2 = -1;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if(arr[mid] == x)
            {
                ans1 = mid;
                high = mid-1;
            }
            
            else if(arr[mid] > x)
            {
                high = mid -1;
            }
            else
            {
                low = mid + 1;
            }
        }
        
        //for the rightmost occurance.Fresh new bs.
        
        low = 0;
        high = n-1;
            
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if(arr[mid] == x)
            {
                ans2 = mid;
                low = mid + 1;
            }
            else if(arr[mid] > x)
            {
                high = mid -1;
            }
            else
            {
                low = mid +1;
            }
        }
        
        ans[0] = ans1;
        ans[1] = ans2;
        return ans;
        
        
        //TC :O(logn) 
        //SC : O(1)
        
    }
};