// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        
        vector<int>ans;
        if(n>=1){
            ans.push_back(0);
        }
        if(n>=2){
            ans.push_back(1);
        }
        int a=0;
        int b=1;
        int sum=0;
        
        for(int i=2;i<=n-1;i++){
            sum = a+b;
            a=b;
            b=sum;
        ans.push_back(sum);
        }
        
        return ans;
        
    }
};