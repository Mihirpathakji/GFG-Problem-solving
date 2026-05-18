class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        
        int n = arr.size();
        stack<int>st;
        vector<int>ans(n,-1);
        
        for(int i = 0; i< n;i ++)
        {
            while(!st.empty() && arr[i] > arr[st.top()])
            {
                ans[st.top()] = arr[i];
                st.pop();
            }
            
            st.push(i);
        }
    
        for(int i = 0 ; i< st.top() ;i ++)
        {
            while(!st.empty() && arr[i] > arr[st.top()])
            {
                ans[st.top()] = arr[i];
                st.pop();
            }
        }
    
        return ans;
        
    }
};