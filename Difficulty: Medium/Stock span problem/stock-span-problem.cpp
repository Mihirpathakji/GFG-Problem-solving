class Solution {
  public:
    
    vector<int> calculateSpan(vector<int>& arr) {
        
        int n = arr.size();
        vector<int>ans(n,-1);
        stack<int>st;

        for(int i = arr.size()-1 ;i >=0; i--)
        {
            while(!st.empty() && arr[i] > arr[st.top()])
            {
                ans[st.top()] = st.top() - i;
                st.pop();
            }
            st.push(i);
        }
        
        for(int i = 0; i< ans.size(); i++)
        {
            if(ans[i] == -1)
            {
                ans[i] = i - ans[i];
            }
        }
        return ans;
        
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */