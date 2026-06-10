class Solution {
  public:
    bool checkKthBit(int n, int k) {
        
        //Let's check if the kth bit from the rightside is set or not using Right Shift.
        
        //Using Right shift Operator.
        
        return ((n >> k) & 1);
        
        //TC : O(1)
        //SC : O(1)
        
    }
};