class Solution {
  public:
    void printDiamond(int n) {
      
    for(int i =1;i<=n;i++){
           
        // for the spaces :
        
        for(int j =1;j<=(n-i);j++){
            printf(" ");        
        }
        
        // for the stars 
        
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        
        // No need to print the trailing spaces at the right 
   
        
        printf("\n");
    
    }
    
        for(int i=n;i>=1;i--){
            // print the spaces 
            
            for(int j=1;j<=(n-i);j++){ 
                printf(" ");
            }
            
            //print the stars :
            for(int j=1;j<=i;j++){ 
                printf("* ");
            }
            
            // No need to print the trailing spaces at the right 
            
            printf("\n");
            
        }
    
        
    }
};