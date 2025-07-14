// User function Template for C++
class Solution {
  public:
    bool checkValidity(int a, int b, int c) {
    
           if(a+b>c && b+c>a && c+a>b){
               return true;
           } 
           else{
               return false;
           }
    
    return false;
    }
};