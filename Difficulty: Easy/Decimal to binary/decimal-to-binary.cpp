class Solution {
  public:
    string decToBinary(int n) {
        
        string ans;
        while(n)
        {//12 6 3 1
        
            if(n%2 ==0)
            ans.push_back('0');//0011
             
            else
            ans.push_back('1');
             
             
            n /= 2;// 6 3 1 0
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};