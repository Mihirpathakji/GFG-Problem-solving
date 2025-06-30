class Solution {
  public:
    int floorSqrt(int n) {
        
        // the square root is always lies between the 0 and the number itself so we can apply the binary search  considering the 0 as the start and the n as the last number 
        
        int start = 0;
        int end = n;
        long long int mid;
       long long int ans = -1;
        
        while(start <= end ){
            
        mid = start + (end -start)/2;
        if(mid *mid == n){
            return  mid;
        }        
        else if(mid *mid < n){
            // maybe the possible answer why ;// 10 -> sqrt(10) == 3.16;  here 3.16 is lesser than 10 i.e any mid*mid that is lesser than 10 is liable to be the square root of the number n hence store that mid it is liable to be the square root of the n hence store that  mid in the another temporary conatiner as it is liable to be the answer of the sqrt(10)
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
            
            
        }
        
        return ans;
        
    }
};