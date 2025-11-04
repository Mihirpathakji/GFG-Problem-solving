// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {

        unordered_map<int,bool>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]=true;
        }
     // x = arr[i]*y  -> if we find out existence of y in the arr[]  y== x/arr[i]  if it is present in the arr[] that means we ca  find the product;
        
        
         for(int i=0;i<n;i++)
         {
             if(arr[i]==0 && x==0)
             {
                 return true;
             }
             else if(arr[i]==0 && x!=0)
             {
                 continue;
             }
             else
             {
                 if(x%arr[i]==0 && mp.find(x/arr[i])!=mp.end())
                 {
                    return true;
                 }
             }
         }
         return false;
    
    //TC : O(n)
    //SC : O(n)


    }
};