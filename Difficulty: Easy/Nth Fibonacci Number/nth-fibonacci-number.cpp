// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // 0 1 1 2 3 5 8 13 21 
        // For the fib(0) and fib(1)  ->you need to cover it in an edge case as we 
        // cannot handle them in the formula the formula will give the answer from the
        // 2nd index itslef 
        if(n==0 || n==1)return n;
        int a=0;
        int b=1;
        int sum;
        for(int i =2;i<=n;i++){
            sum = a+b;
            a=b;
            b=sum;
        }    
        return sum;
    }
};                                                                                      