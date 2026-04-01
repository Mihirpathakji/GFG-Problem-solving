class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int>next_greater(n);
        stack<int>st;
        
        
        for(int i = n -1 ; i >= 0 ; i--)
        {
            
            if(st.empty())
            {
                next_greater[i] = -1;
                st.push(arr[i]);
            }
            else if(!st.empty() && st.top() > arr[i])
            {
                next_greater[i] = st.top();
                st.push(arr[i]);
            }
            else
            {
                while(!st.empty() && st.top() <= arr[i])
                {
                        st.pop();
                }
                if(st.empty())
                {
                    next_greater[i] = -1;
                    st.push(arr[i]);
                }
                else
                {
                    next_greater[i] = st.top();
                    st.push(arr[i]);
                }
                
            }
                
        }
        
        return next_greater;
        
        }
};