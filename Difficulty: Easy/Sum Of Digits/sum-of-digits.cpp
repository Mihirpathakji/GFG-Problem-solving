class Solution {
  public:
    int sumOfDigits(int n) {
    
    int sum =0;
    int ans=0;
    while(n!=0){
        int r=n%10;
        ans+=r;
        n/=10;
    }
    return ans;
    
    }
};