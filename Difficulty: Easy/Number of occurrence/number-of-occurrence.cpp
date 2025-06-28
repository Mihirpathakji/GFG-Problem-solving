class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        
// We are given an sorted array and target value      
        // Whenever there is  a sorted array and a target is given to us then it is obvious to apply the binary search 
        int start = 0;
        int end = arr.size() -1;
        int mid ;
    
        int ans1 =-1 ; 
        
        // jo kasu bi nahi ave toh 0 toh rehsejjjjjj
        int ans2 = -1;
        
        // Right most index
        
        while(start<=end){
                mid = start + (end-start)/2;
                if(arr[mid] == target){
                    ans1 = mid; // store that index in ans than look for the further right most
                    start = mid + 1;
                }        
                else if(arr[mid] > target){
                        end = mid -1;
                }   
                else{
                    start = mid + 1 ;
                }
        }
        
// Now the values of the start end all gets changed bcz of the above while loop so reinitialize them for the next while loop
    
      start  = 0;
      end = arr.size() -1;
      while(start <= end){
             mid  = start + (end - start)/2;  // you find out the middle index check if the value at that middle index do equal the target value or not 
            if(arr[mid] == target){
    // now if i write ans  = mid then ans got initialized by the new value of the mid but the previously storedf value of the ans = previous mid got lost so how can i return that better you made two different variable for the last and the first index 
    // For the two different mid the answers  it is better to store them into two different conatiners since you need to subtract them if both of them are ubder a single container imagine how would you subtract them tghereby adding one to them 
    // So the better way is to stored them under two different containers thereby subtract them individually 
                ans2 = mid;
                end = mid -1;        
            }
                else if(arr[mid] > target){
                        end = mid -1;
                }   
                else{
                    start = mid + 1 ;
                }
            
      }
        // AKhi while loop pati gayi toh pn na thayu i.e there is no target in the whole array :
        
        if(ans1 == -1 ||ans2 ==-1){
                return 0;
        }
        
        return (ans1-ans2)+1;
        
    }
};
