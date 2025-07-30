class Solution {
  public:
    void printDiamond(int n) {
      
    for(int i =1;i<=n;i++){
           
        // for the spaces :
        // (3-1)==2 is correct there are two spaces in the left most of the first row 
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
    

    // i==3-1==2  i.e   i == 2     >=1   for the two times the loop will run that's what we wanted actually 

        for(int i=n;i>=1;i--){
            // print the spaces 
            
            for(int j=1;j<=(n-i);j++){ 
                 // j<=(3-2)<=1  only one time the loop will run here 
                printf(" ");
            }
            
            //print the stars :
            for(int j=1;j<=i;j++){
                //j<==(3) for the 3 times it runs and thereby prints the star 
                printf("* ");
            }
            
            // No need to print the trailing spaces at the right 
            
            printf("\n");
            
        }
    
        
    }
};