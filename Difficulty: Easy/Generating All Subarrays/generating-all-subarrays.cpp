// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        
        int n=arr.size();//O(1)
        vector<vector<int>>subarrays;
        for(int i=0;i<n;i++)
        {
            // i=1 <3   i=2  
            for(int j=i;j<n;j++)
            {
                //j=0<3 ; j=1 ;j=2 
                vector<int>generated_subarray;// NEW SUBARRAY //NEW SUBARRAY 
                for(int k=i;k<=j;k++)
                {
                    //k=0  <=2  0  1    2 
                    //0 to 0     k=0  to  k<=1 ->Two subarrays. k=1 <=1 ;  k=2 ; k=
                    generated_subarray.push_back(arr[k]);//1// 1 2  // 1  2  3 // 2  //  2 3   // 3 
                }
                    subarrays.push_back(generated_subarray);//[1 2]  [1 2 3] [2  3] [3]
                    // [1] [1 2] [1 2 3 ] [2 3 ] [2]  [3]
            }
        }
        
        return subarrays;
        
        // TC : O(n^3) 
        // SC : O(n^2)
    }
}; 