class Solution {
public:

int isPossibleAllocation(vector<int>&nums,int m,int mid){

    int studentcount = 1;
    int pagesum = 0;
    for(int i = 0; i <nums.size(); i++){
            // nums.size() - 1 is the endeth index 

        if(pagesum + nums[i] <= mid){
                pagesum = pagesum + nums[i];
        }
        else{
            studentcount ++;
            if(studentcount > m || nums[i] > mid){
                    return 0; // false 
            }
            else{

                // For the new student again the pagesum should be started from 0 
                
                pagesum = 0;
                pagesum += nums[i];
            }

        }

    }

    return 1;




}

    int findPages(vector<int> &nums, int m)  {
     
    //  // there is  one EDGDE CASE :
    //  -> IF THE NUMBER OF BOOKS ARE LESS THAN NUMBER OF THE STUDENTS THEN EG: BOOKS = 3 AND STUDENT =10 AND EACH STUDENT SHOULKD GET ATLEAST ONE BOOK
    //  ->HERE THE ALLOCATION IS NOT POSSIBLE 
    
    
        if(nums.size() < m){
            return -1;
        }
     
        
        int start = 0;
        int ans = -1;
        // take the end as the sum of all the array elements so that serarch space should be more  available 
        int sum  = 0;
        int end ;
        for(int i = 0; i < nums.size(); i++){
        
        sum +=  nums[i];
        }

        end = sum;
        int mid ;
        while(start <= end){
            
            mid = start + (end -start)/2;

            if(isPossibleAllocation(nums,m,mid)){
  
            //  if(function ) -> that function must be bool
  
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