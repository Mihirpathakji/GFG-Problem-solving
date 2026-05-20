class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        
        //Placed all the possible row numbers in a stack:
        stack<int>st;
        for(int i = 0 ; i < mat.size(); i++)
        {
            st.push(i);
        }

        int ele1;
        int ele2;
        
        while(!st.empty() && st.size() >= 2)
        {
            ele1 = st.top();
            st.pop();
            ele2 = st.top();
            st.pop();

            if(mat[ele1][ele2] == 1)
            {
                if(mat[ele2][ele1] == 0)
                {
                    //ele2 is possible ans.
                    st.push(ele2);
                }
            }
            
            else
            {
                if(mat[ele2][ele1] == 1)
                {
                    st.push(ele1);
                }
            }
            
        }
        
        if(st.empty())
        {
            return -1;
        }
        
        bool flag = true;
        
        for(int i = 0 ; i < mat[0].size(); i ++)
        {//1 2 3
            if(i!=st.top() && mat[st.top()][i] == 1)
            {
                flag = false;
                break;
            }
            else if(i!=st.top() && mat[i][st.top()] == 0)
            {
                flag = false;
                break;
            }
        }
        
        if(flag)
        {
            return st.top();
        }
        
        else
        {
            return -1;
        }
        
        
    }
};