class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int s = 0;
        int e = arr.size() -1;
        int leftoccurence = -1;
        int rightoccurence = -1;
        
        int mid ;
        
        // For the right :
        while(s <= e){
            mid  = s + (e-s)/2;
        
            if(arr[mid] == x){
                rightoccurence  = mid; // store that index 
                s = mid  + 1;  // search on the right side
            }
            else if(arr[mid] > x){
                    e  = mid - 1;
            }
            else {
                s = mid  + 1 ;
            }
            
        }
        
        // Reset e and s since their values of e and s gets changed after  the use of the first while loop
        
        // e and s both gets changed after the use of the first while loop :
         e = arr.size() -1;
         s = 0;
         
         
                // For the left:
        while(s <= e){
            mid  = s + (e-s)/2;
        
            if(arr[mid] == x){
                leftoccurence = mid; // store that index 
                e = mid -1;  // search on the left side
            }
            else if(arr[mid] > x){
                    e  = mid - 1;
            }
            else {
                s = mid  + 1 ;
            }
            
        }
        
        return {leftoccurence,rightoccurence};
        
    }
};