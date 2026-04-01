class twoStacks {

    int* arr;
    int top1;
    int top2;
    
  public:

    twoStacks() {
        arr = new int[100];
        top1 = -1;
        top2 = 100;
        
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        top1++;
        arr[top1] = x;
    }

    // Function to push an integer into the stack2.
    
    void push2(int x) {
        top2--;
        arr[top2] =x; 
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        if(top1 == -1)
        {//No element is present.
            return -1;
        }
        int x = arr[top1];
        top1--;
        return x;
    }

        
    // Function to remove an element from top of the stack2.
    
    int pop2() {
        
        if(top2 == 100)
        {//
            return -1;
        }
        int x = arr[top2];
        top2++;
        return x;
    }
};