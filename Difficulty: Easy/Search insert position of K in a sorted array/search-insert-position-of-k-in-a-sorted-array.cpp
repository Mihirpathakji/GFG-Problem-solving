// User function Template for C++

class Solution {
  public:
    int searchInsertK(vector<int> Arr, int N, int k) {
        int start = 0;
        int end =Arr.size()-1;
        int mid;
        int ans= Arr.size();
        while(start<=end){
            mid = start + (end -start)/2;
            if(Arr[mid]==k){
                return mid;
            }
            else if(Arr[mid]<k){
                start = mid + 1;
            }
            else{
                ans =mid;
                end = mid -1;
            }
        } 
        return ans;
    }
};