class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
            
        sort(arr.begin(),arr.end());
        int second_max=-1;
        int maxi=*max_element(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<maxi && arr[i]>second_max)
                second_max=arr[i];
        }
        return second_max;
     
      
    }
};