class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        //Kadanes's Algorithm://arr[]=[-10000]
        int n=arr.size();
        int sum=0;
        int max_sum=-10001;
        for(int i=0;i<n;i++)
        {
            if((sum+arr[i])>=arr[i])
            {
                sum+=arr[i];   
            }
            else
            {
                sum=arr[i];
            }
            max_sum=max(max_sum,sum);
        }
        return max_sum;
        
    }
};