class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0;
        int high=n-1;//n==7
        int ans=n;
        while(low<=high)
        {
            int mid=low+(high-low)/2; // 3 
            if(arr[mid]>=target)
            {
                ans=min(ans,mid);//
                high=mid-1;
            }
            else if(arr[mid]<target)
            {
                low=mid+1;//1
            }
        }
        return ans;
        
        //TC:O(log2(n)
        //SC:O(1)
    }
}; 