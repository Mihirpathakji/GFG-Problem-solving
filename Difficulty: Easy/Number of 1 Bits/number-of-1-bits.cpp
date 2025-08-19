class Solution {
  public:
    int setBits(int n) {
    
    int cnt=__builtin_popcount(n);
    return cnt;


    }
};