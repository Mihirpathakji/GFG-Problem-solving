
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        int n=arr.size();
        int i=0;
        int j=1;
        sort(arr.begin(),arr.end());// 2  3  5   5  20  80 
        while(j<n)
        {
            if(arr[j]-arr[i]==x)
            {
                return true;
            }
            else if(arr[j]-arr[i]>x)
            {
                //decrease arr[j] or increase arr[i]
                i++;
            }
            else
            {
                j++;
            }
            if(i==j)
            {
                j++;
            }
        }
        return false;
    }
};
