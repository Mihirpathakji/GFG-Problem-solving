class Solution {
  public:
    int binaryToDecimal(string &b) {
        
        
        int n = b.length();         
        long long int sum = 0;
        
        //10001000. n = 8
        
        for(int i = 0; i < n;i++)
        {
            long long int temp =  (pow(2,n-i-1));
            sum += ((b[i]-'0') * temp);
        }
        
        return sum;
    }
};