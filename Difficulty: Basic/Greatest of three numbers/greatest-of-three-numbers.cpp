class Solution {
  public:
    int greatestOfThree(int a, int b, int c) {
           
        if(a>b){
            if(a>c){
                return a; 
            }// c<a
            else{
                //c>a>b
                return c;
            }
        }
        else{ 
            // b>a how can we say that b is also > than c 
            if(b>c){
                return b;
            }else{
                // c>b>a
                return c;
            }
        }
        return 0;
    }
};