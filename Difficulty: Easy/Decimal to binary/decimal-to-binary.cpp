class Solution {
  public:
    string decToBinary(int n) {
        
        string ans;
        
        while(n)
        {
            ans.push_back(n%2 + '0');
            n/= 2;           
        }
        
        
        //this loop will run till logn time.
        
        //logn as well as ans will contain logn characters
        
        reverse(ans.begin(),ans.end());//O(m) = O(logn)
        return ans;
        
        //TC:O(logn)+O(logn) == O(logn)
        //SC:O(logn)
        
    }
};