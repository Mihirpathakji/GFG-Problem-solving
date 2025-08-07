class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        
        sort(arr.begin(),arr.end());
    
        int firstmax=arr[0];
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]>firstmax){
                firstmax=arr[i];
            }
        }
      
        int secondmax= -1;//so that even nothing comes under you willl get the -1 surely 
        
        for(int i=0;i<n;i++){
            if(arr[i]!=firstmax && secondmax<arr[i]){
                secondmax=arr[i];
            }
        }
          return secondmax;
      
    }
};