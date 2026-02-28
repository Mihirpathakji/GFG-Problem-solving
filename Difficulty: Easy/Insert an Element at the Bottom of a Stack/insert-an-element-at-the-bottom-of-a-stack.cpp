// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        
        stack<int>st2;
        stack<int>st3;
        st2.push(x);
        
        while(st.size())
        {
            st3.push(st.top());
            st.pop();
        }
        
        while(st3.size())
        {
            st2.push(st3.top());//2 4
            st3.pop();
        }
        
        st = st2;
        return st;
        
        //
            
    }
};