// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
    
    int mini=INT_MAX;
    for(int i =0;i<arr.size();i++){
        if(arr[i]<mini){
            mini =arr[i];  // mini == arr[i] which is lesser than the INT_MAX
            
            // i.e the mini = 1 we store the 1 in that variable mini  and now for the
            //next iteration it would be check that arr[1]<1(mini) if yes than we will 
            //update the arr[i] with the mini and hence we updated that arr[i] within that
            // mini
            
            
        }
    }
    int maxi=INT_MIN;
    for(int i =0;i<arr.size();i++){
        if(arr[i]>maxi){
            maxi=arr[i]; // maxi =1 then it would be checked in the net iteration that 
            //arr[1] >maxi if yes means that arr[i] is the posssible to be the maximum of
            // all these array elements. so there we store the or update the maxi with that 
            //value of the arr[i]
        }
    }
    
    
    return {mini,maxi};
    
    }
};