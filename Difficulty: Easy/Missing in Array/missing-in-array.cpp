class Solution {
  public:
    int missingNum(vector<int>& arr) {
        
        int x=arr.size();
        //arr.size()==n-1
        //x==n-1  // n=1+x=1+arr.size();
        
        int n=1+x;//x=n-1-> n=x+1
        long long int total_sum=0;
        for(int i=1;i<=n;i++)
        {
            total_sum+=i;//+=1==1+2+3+4+5==15
        }
        long long int arr_sum=0;
        for(int i=0;i<arr.size();i++)
        {
            arr_sum+=arr[i];
        }
        return (int)(total_sum-arr_sum);
        //arr.size()=x=4
        //n=5 
        
        
        //ans=[1,n]sum-[sum of arr_elements]  ==[1,1+x]-[sum of arr elements]==[1,1+arr.size()]-[sum of arr elements]
        //TC:O(n)
        //SC:O(1)
    }
};