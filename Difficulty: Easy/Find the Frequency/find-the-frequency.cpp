/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        
        // Precompute through unordered map :
        
        unordered_map<int,int>mp1;
        for(int i=0;i<arr.size();i++)
        {   
            mp1[arr[i]]+=1;
        }
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                return mp1[arr[i]];
            }
        }

       return 0;
    }
};