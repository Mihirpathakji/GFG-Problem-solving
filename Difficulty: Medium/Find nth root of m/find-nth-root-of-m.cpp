int func(int n, int m )
{
    long long int ans=1;//1
    long long int product=1;//1
    for(int i=1;i<=n;i++)
    {//i==2<=3  i==3
        ans*=m;//125;8;27;;8*8*8*8=4096;256;16
    }
    return ans;//8;125;8;27;16
}
class Solution {
  public:
    int nthRoot(int n, int m) {
        long long int low=1;//1
        long long int high=m;//9
        if(m==0)
        {
            return 0;
        }
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;//5//2//3/*8 4 2*/
            long long int ans1=func(n,mid);//(3,2);(3,5)->125;8;(3,3);27;//////(4,8)=4096  ;(4,4)=256;(4,2)==16
            if(ans1==m)
            {
                return mid;//2;2
            }
            else if(func(n,mid)<m)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;//4
            }
        }
        //till not returned->no perfect root available 
        return -1;
        
    }
};