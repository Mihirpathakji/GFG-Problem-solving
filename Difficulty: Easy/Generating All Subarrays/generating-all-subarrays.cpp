// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        
        int n=arr.size();
        vector<vector<int>>Generated_subarr;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                vector<int>ans;//
                for(int k=i;k<=j;k++)
                {
                    ans.push_back(arr[k]);//1 , 1 2  , 1 2 3 , 2 ,2  3 , 3 
                }
                Generated_subarr.push_back(ans);//[2], [2 3],[3]
                
            //  [ [1], [1  2], [1 2 3 ], [2] ,[2 3] ,[3] ]    
            }
        }
        return Generated_subarr;
    }
};