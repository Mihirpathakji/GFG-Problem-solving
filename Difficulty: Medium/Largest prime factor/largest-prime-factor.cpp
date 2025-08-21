class Solution {
  public:
    long long int largestPrimeFactor(int n) {
    
    // Finding or Printing the Prime Factors -> Prime Factorization method  
    // in which the factors always start from i==2
    vector<int>nums;
    int temp=n;
    for(int i=2;i*i<=n;i++){//O(sqrt(n))
    // already considered that i==1 is an factor hence need only one more factor to tell n to be prime number 
            if(n%i==0){
                // yes we finded it .Hence n is prime .store it 
                nums.push_back(i);
                //In prime Factorization Method we keep on dividing the n by i till it is completely divisible .If
                //n%i!=0 that means the n is now no longer divisble by the  i you need to move to the next value of 
                // i to check whether it divides the n or not 
                //To keep on dividing we uses an while loop since inside the while loop if we keep on dividing the 
                //complexity is minimum     O(logn)
                while(n%i==0){
                    n=n/i; // O(logn)
                }
            }
    }
    //EDGE CASE:if n is itself prime say n==37
    if(n!=1 ){
        nums.push_back(n);// you need to store that prime number inorder to it  get printed .
    }
    return *max_element(nums.begin(),nums.end());
    
    //Final TimeComplexity :O(sqrt(n)*logn)
    }
};