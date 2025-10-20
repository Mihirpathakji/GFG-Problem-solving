//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        
        set<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]=1;
        }
        
        for(int i=0;i<b.size();i++)
        {
            if(mp[b[i]])
            {
               ans.insert(b[i]); 
            }
        }
        
        vector<int>nums3;
        for(auto it : ans)
        {
            nums3.push_back(it);
        }
        
        return nums3;
            
        //TC : O(nlogn)       
        //SC : O(3*n)
    }
};