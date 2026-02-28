class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        
        stack<int>st;
        
        for(int i=0;i<arr.size();i++)
        {//i=0;1
            if(st.size() == 0)
            {
                st.push(arr[i]);
            }
            else if((arr[i] >= 0 && st.top()>=0) || (arr[i] < 0 && st.top() < 0))
            {
                st.push(arr[i]);//186 
            }
            else
            {
                st.pop();
            }
        }
        
        int n = st.size();//
        vector<int>ans(n);
        
        int j = n-1;  //
        
        while(j >= 0)
        {
            ans[j] = st.top();//
            st.pop();
            j--;
        }
        
        return ans;
    }
};