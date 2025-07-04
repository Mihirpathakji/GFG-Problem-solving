// User function template for C++

class Solution {
  public:
    
    
    bool istrue(vector<int>& arr, int k,int mid){
        
        int boardsum = 0;
        int painters = 1;    
        
        for(int i = 0; i < arr.size(); i++){
            boardsum += arr[i];
                    
                    
            if(boardsum > mid){
                painters++;
                boardsum = arr[i];
                
            }
    
            
        }
        return painters <= k;
        
    }
    
    int minTime(vector<int>& arr, int k) {
    
     int start = *max_element(arr.begin(),arr.end());
     int end ;
     int mid;
     int ans = -1;
     int sum = 0;
     for(int i = 0; i< arr.size() ; i++){
            sum += arr[i];
     }
        
    end = sum;
    
    while(start <= end){
        
         mid = start + (end - start)/2; 
         
         if(istrue(arr, k,mid)){
                ans = mid;
                end = mid -1;        
         }
         else{
             start = mid + 1;
         }
        
    }
    
    return ans;
    }
    
};