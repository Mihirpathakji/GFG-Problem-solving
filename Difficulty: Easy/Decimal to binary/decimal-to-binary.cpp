class Solution {
  public:
    string decToBinary(int n) {
        
        int remainder;
        string ans;
        while(n > 0)
        {
            remainder =  n % 2;//1
            ans.push_back(remainder + '0');
            n/=2;//3//1 
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        //TC : O(logn)
    
    }
};