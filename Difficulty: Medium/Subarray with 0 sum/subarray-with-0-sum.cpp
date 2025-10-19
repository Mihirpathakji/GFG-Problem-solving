class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        int n=arr.size();
        vector<int>pf(n,0);
        pf[0]=arr[0];
        unordered_map<int,bool>mp;
        if(pf[0]==0)
        {
            return true;
        }
        mp[pf[0]]=1;
        
        for(int i=1;i<n;i++)
        {
            pf[i]=pf[i-1]+arr[i];
            
            if(mp[pf[i]])
            return true;
            
            if(!pf[i])
            {
                return true;
            }
            
            
            mp[pf[i]]=1;
        }
    
        return false;
        
        //Tc : O(n)
        //SC : O(n)
    }
};