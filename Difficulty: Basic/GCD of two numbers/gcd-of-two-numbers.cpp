class Solution {
  public:
    int gcd(int a, int b) {
    
    // Most Optimal way -Euclidean Algorithm:
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    
    if(a==0){
        return b;
    }
    return a;// for b==0 or a==b 
    //Tc: O(log_base(phi)(min(a,b)));
    //Sc:O(1);

    }
    
};
