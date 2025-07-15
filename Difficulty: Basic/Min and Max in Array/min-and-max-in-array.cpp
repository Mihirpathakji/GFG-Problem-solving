// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
    
    int mini=INT_MAX;
    for(int i =0;i<arr.size();i++){
        if(arr[i]<mini){
            mini =arr[i];
        }
    }
    
    
    
    
    
    int maxi=INT_MIN;
    for(int i =0;i<arr.size();i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    
    
    return {mini,maxi};
    
    }
};