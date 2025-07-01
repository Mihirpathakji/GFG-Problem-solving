class Solution {
  public:
    
    int ispossible(vector<int> &arr, int k , int mid){
        
        int studentcount = 1;
        int pagesum = 0;
        
        // It doesnt know that what is mid so you need to pass it in the function parameter 
        
        for(int i = 0 ; i< arr.size() ; i ++){
            
                if(pagesum + arr[i]  <= mid){
                    pagesum += arr[i];
                }
                else{
                    
                    studentcount ++;
                    
                    if(arr[i] > mid || studentcount > k){
                        return 0;  // For not executing the condition
                    }
                    
                    else{
                        pagesum = arr[i];
                    }
                
                }
            
        }
    
        return 1; // yes 
        
    }
    
    
    int findPages(vector<int> &arr, int k) {
        
    // Edge case : If the number of the books are even lesser than no. of students allocation is not possible for all of them hence return -1
        if(arr.size() < k )    
        return -1;
        
        
    int start = 0;
    
    int sum = 0;
    
    int end ;
    
    for(int i = 0; i < arr.size();i++ ){
        sum += arr[i];
    }
    
    end  = sum ;
    
    int ans = -1;
    int mid;
    
    while(start <= end){
        
        mid = start + (end -start)/2;
        
         if(ispossible(arr,k,mid)){
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