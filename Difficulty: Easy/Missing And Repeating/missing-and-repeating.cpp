class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        //IS there any element from 1 to n^2 which is not yet mapped.
        for(auto it :mp)
        {
            if(it.second==2)
            {
                ans.push_back(it.first);
                break;
            }
        }
        for(int i=1;i<=n*n;i++)
        {
            if(!mp[i])
            {
                ans.push_back(i);
                break;
            }
        }
        return ans;

    }
};