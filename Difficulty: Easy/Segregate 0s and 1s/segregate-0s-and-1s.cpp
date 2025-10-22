// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        
        int n=arr.size();//O(1)
        int count0=0;
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        //count0-> It will contain the Number of Zeroes and count1->Will contain the Number of ones
        
        //count0->
        for(int i=0;i<count0;i++)
        {
            arr[i]=0;
        }
        for(int i=count0;i<n;i++)
        {
            arr[i]=1;
        }
        
        // TC :O(2*N) 
        // SC :O(1)

    }
};