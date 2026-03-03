// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        
        stack<string>st;
        for(int i=0;i<arr.size();i++)
        {
            if(st.empty())
            {
                st.push(arr[i]);
            }
            else if(st.top() != arr[i])
            {
                st.push(arr[i]);
            }
            else if(st.top() == arr[i])
            {
                st.pop();
            }
        }
        
        return st.size();
        
        //TC:O(n)
        //SC:O(n)
        
    }
};