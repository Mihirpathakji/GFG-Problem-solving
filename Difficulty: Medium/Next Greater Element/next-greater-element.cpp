class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        
        int n = arr.size();
        
        stack<int>st;//store the indices of the elements for which the next Greater element is not yet 
        //Founded.
        
        st.push(0);
        vector<int>ans(n,-1);
        
        for(int i = 1 ; i < n; i++)
        {
            while(!st.empty() && arr[i] > arr[st.top()])
            {
                ans[st.top()] = arr[i];//arr[i] is next Greater for the element at the index
                //st.top().
                
                st.pop();
            }
            
            st.push(i);
        }
        
        return ans;
        
    }
};