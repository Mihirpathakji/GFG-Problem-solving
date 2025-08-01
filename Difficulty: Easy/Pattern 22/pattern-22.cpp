class Solution {
  public:
    void printSquare(int n) {
           
           int min1=0;
           int min2=0;
           int min3=0;
           
           // printing this matrix :-
           
           for(int i=1;i<=2*n-1;i++){    
               for(int j=1;j<=2*n-1;j++){
                    int top=i-1;
                    int bottom=(2*n)-1-i;
                    int right=(2*n)-1-j;
                    int left=j-1;
                    if(left<right){
                        min1=left;
                    }
                    else{
                        min1=right;
                    }
                    
                    if(top<bottom){
                        min2=top;
                    }
                    else{
                        min2=bottom;
                    }
                    
                    if(min1<min2){
                        min3=min1;
                    }
                    else{
                        min3=min2;
                    }
                    
                    printf("%d ",n-min3);
               }
               printf("\n");
           }
            
    }
};