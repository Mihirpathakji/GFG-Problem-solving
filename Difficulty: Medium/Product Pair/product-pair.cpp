// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        
        int start=0;
        int end=arr.size()-1;
        sort(arr.begin(),arr.end());
        long long int product=1;
        while(start<end)
        {
            product=(long long)arr[start]*(long long)arr[end];
            if(product==x)
            {
                return true;
            }
            else if(product<x)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return false;
        
        //TC : nlogn+n==nlogn
        //SC:  O(1)
        
    }
};