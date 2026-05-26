class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        
        int n  =arr.size();
        unordered_map<int,int>mp;
        mp[0] = -1;
        int prefix_sum = 0;
        int ans = INT_MIN;
        
        for(int i=0;i <n;i++)
        {
            prefix_sum += arr[i];
            if(mp.find(prefix_sum - k)!=mp.end())
            {
                ans = max(ans,i-mp[prefix_sum-k]);
            }
            
            
            if(mp.find(prefix_sum) == mp.end())
            {
                mp[prefix_sum] = i;
            }
        }
    
        if(ans == INT_MIN)
        {
            return 0;
        }
        
        return ans;
    
    }
};