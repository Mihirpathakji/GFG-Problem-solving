class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int up=upper_bound(arr.begin(),arr.end(),target)-arr.begin();
        return up;
        //TC: O(log2(n))
        //SC: O(1)
    }
};
