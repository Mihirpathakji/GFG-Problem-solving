class Solution {
  public:
    
    int printfactorial(int n)
    {
        if(n==1)
        {
            return 1;
        }
        return n*printfactorial(n-1);// 5*24 == 120// 4*6==24// 3*2==6// 
        // 2*1==2// 
    }
  
    int factorial(int n)
    {
        return printfactorial(n);//printfactorial(5)
    }
};