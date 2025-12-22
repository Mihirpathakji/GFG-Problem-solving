class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        vector<int>ans;//size==6
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        /*
            mp[2]=2
            mp[3]=2
            mp[5]=1
        */
        }
        for(int i=1;i<=n;i++)
        {//ans[1]=mp[1]=0;ans[2]=mp[2]=2;ans[3]=mp[3]=2;ans[4]=mp[4]=0;ans[5]=mp[5]=1
            ans.push_back(mp[i]);
        }
    
        return ans;
        //TC:O(n)
        //SC:O(n)
    }
};
