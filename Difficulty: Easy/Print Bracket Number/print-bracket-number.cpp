// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string &s) {
        
        stack<int>Number_of_Opening;
        int n = s.size();
        
        int cnt_Opening = 0;
        vector<int>ans;
            
        for(int i = 0 ;i <n ; i ++)
        {
            if(s[i] == '(')
            {
                cnt_Opening++;//1 2 3 
                Number_of_Opening.push(cnt_Opening);//1 3 
                ans.push_back(cnt_Opening);
            }
           
            else if(s[i] == ')')
            {
                ans.push_back(Number_of_Opening.top());//2  1
                Number_of_Opening.pop();
            }
        }
        return ans;
        
    }
};