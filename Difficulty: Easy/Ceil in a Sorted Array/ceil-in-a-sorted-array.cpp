// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int lb=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        if(lb==-1 || lb==arr.size())
        {
            return -1;
        }
        return lb;
        //TC:O(log2(n))
        //SC:O(1)
    }
};