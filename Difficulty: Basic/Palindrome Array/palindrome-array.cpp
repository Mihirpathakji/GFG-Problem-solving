
class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
      
      // arr[]={1,2,3,2,1}; is said to be an palindromic array 
      int n=arr.size();
      for(int i=0;i<n/2;i++){
            if(arr[i]!=arr[n-i-1]){
                // is a pattern whenever you need to return true after all the iterations get to be true 
                // more easier is that you check if any single  of them is false if so return false 
                return false;
            }
      }
      return true;
      
      
    }
};
