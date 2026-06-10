void swap(int &a, int &b) {
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b; 
    
    //TC : O(1) Swap two Numbers without using third Number.Using XOR operator.
  
}
