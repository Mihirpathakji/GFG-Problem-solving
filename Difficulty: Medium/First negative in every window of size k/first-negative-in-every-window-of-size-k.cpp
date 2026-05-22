class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        
        int n = arr.size();
        int i = 0;
        int j = 0;
        queue<int>q;//We will store the negative elements of current window.Remove it
        //from q as move to next window.This saves TC to compute and check for the 
        //negatives of the every window.
        
        vector<int>ans;
        
        while(j < n)
        {
            if(arr[j] < 0)
            {
                q.push(arr[j]);
            }
            
            if(j-i+1 == k)
            {
                if(!q.empty())
                {
                    ans.push_back(q.front());
                }
                else
                {//no negative element in the current window.
                    ans.push_back(0);
                }
                
                if(arr[i] < 0)
                {
                    //It will be front of the queue.
                    q.pop();
                }   
                i++;
            }
            j++;
        }
        return ans;
        
    }
};