class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        
        int maxi  = INT_MIN;
        int n  = arr.size();
        for(int i=0;i<arr.size();i++)
        {
            maxi = max(maxi,arr[i]);
        }
        if(n == 1)
        {
            return arr[0];
        }
        //maxi ->*max
    
        int second_maxi = -1;
     
        for(int i=0;i<n;i++)
        {
            if(arr[i] < maxi && arr[i] > second_maxi) 
            {
                second_maxi  = arr[i];// 5
            }
        }
        
        return second_maxi;
        
    }
};