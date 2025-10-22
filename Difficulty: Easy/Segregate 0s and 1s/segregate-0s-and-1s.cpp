// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        //Using Two Pointer Approach :
        int n=arr.size();
        int start=0;//Pointing to Zeroth index 
        int end=n-1;//Pointing to Last index
        
        while(start<end)
        {
            if(arr[start]==0)
            {
                // is CORRECT VALUE.CHECK FOR THE NEXT
                start++;
            }
            else
            {
                // arr[start]==1 is not a correct value .
                if(arr[end]==0)
                {
                    //Swap 1 by 0 
                    swap(arr[start],arr[end]);
                    //Here both the arr[start] and the arr[end] Got the Correct Value .Both of them Got the Correct Value .Lets check for the next TWO SET OF INDICES .
                    //increment one The one ahead index 
                    start++;
                    //Decrement one The one below index 
                    end--;
                }
                else
                {
                    //The arr[end]==1 is AT CORRECT POSITION LETS CHECK FOR THE SECOND LAST AND DECREASING INDEX ELEMENTS 
                    end--;
                }
            }
        }
        
        
        //Tc : O(n)
        //SC : O(1)
        
        
    }
};