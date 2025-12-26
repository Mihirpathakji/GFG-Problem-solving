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
                ans1=ans;//2  2
                ans=min(ans,arr[low]);//ans=arr[low]//2  
                if(ans1!=ans)
                {
                    index=low;
                }
                low=mid+1;
              }
              else
              {
                  ans1=ans;
                  ans=min(ans,arr[mid]);//ans=arr[mid]
                  if(ans1!=ans)
                  {
                    index=mid;//2<INT_MAX ->index=2;
                  }
                  high=mid-1;
              }
          }
          return index;
    }
};