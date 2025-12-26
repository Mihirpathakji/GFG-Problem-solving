class Solution {
  public:
    int findKRotation(vector<int> &arr) {
          int n=arr.size();
          //Finding Minimum element and it's index in an Rotated sorted array:-
          int low=0;
          int mid=-1;
          int high=n-1;
          int ans=INT_MAX;
          int index=-1;
          int ans1=INT_MAX;
          while(low<=high)
          {
              mid=low+(high-low)/2;//0
              //Identify which part of the arr is sorted:
              if(arr[low]<=arr[mid])
              {
                //find minimum from sorted part and get's its index.
                ans1=ans;
                ans=min(ans,arr[low]);//ans=arr[low]
                if(arr[low]<ans1)
                {
                    index=low;
                }
                low=mid+1;
              }
              else
              {
                  ans1=ans;
                  ans=min(ans,arr[mid]);
                  if(arr[mid]<ans1)
                  {
                    index=mid;
                  }
                  high=mid-1;
              }
          }
          return index;
    }
};