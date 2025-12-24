class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int lb=lower_bound(arr.begin(),arr.end(),target)-arr.begin();
        int up=upper_bound(arr.begin(),arr.end(),target)-arr.begin();;
        //First_Occurance=lb;Last_Occurance=up-1;// 0 1 ->length=(1-0)+1
        
        if(lb==up)
        {
            return 0;//No occurance of target 
        }
        int ans=(up-1)-lb+1;
        return ans;
        //TC:O(log2(n))
        //SC:O(1)
    }
};
