class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int lb=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int up=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        if(lb==up)
        {
            //Target value is not present in the Array in this case.
            return {-1,-1};
        }
        return {lb,up-1};
        //TC:O(log2(n))
        //SC:O(1)
    }
};