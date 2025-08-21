class Solution {
  public:
    bool isPrime(int n) {
        
          int count=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                count++;
                if(i!=n/i){
                    count++;
                }// if count has become greater than 2 than no need to check that now it is increasing or not no need to check for the other iterations already the count had exceeed the 2 so it is not a prime number moved to next input exit that for loop forever for that input 
                if(count>2){
                    break;
                }
            }
        }
            return count==2;
    }
};
