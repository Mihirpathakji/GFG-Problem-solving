class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0;
        int high=n-1;//6 
        int ans=n;
        while(low<=high)
        {//0<=6 ; 4<=6 ;6<=6 ;6<=5 mope 
            int mid=low+(high-low)/2;//3   (4+6)/2==5 ;6 
            if(arr[mid]>target)
            {
                ans=mid;//6
                high=mid-1;//5
            }
            else
            {
                low=mid+1;//low=4  low=6 
            }
        }
        return ans;//6
    }
};
