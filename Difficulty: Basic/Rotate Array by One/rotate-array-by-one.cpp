// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
      
      reverse(arr.begin(),arr.end());
      //[5 4 3 2 1 ]
      
      //reverse the last (n-1) elements.
      reverse(arr.begin()+1,arr.end());
      //[5 1 2 3 4]
      
      //[3 1 2 6 7 8 9]
      //[3 9 8 7 6 2 1]
    }
};