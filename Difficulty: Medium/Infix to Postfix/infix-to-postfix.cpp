class stack1{
    
    //Array based implementation :
    public:
    
    int top;//"Index" thi Track rakhse stack ni(Array ni) size no 
    char* arr;
    int size;//Fixed total size allocated.
    
    
    stack1(int n)
    {
        top = -1;
        arr = new char[n];
        size = n;
    }
    
    void push(char value)
    {
        if(top == size - 1)
        {
            //array is full i.e element is present even at the last index.//We cannot insert anything.
            cout << "Stack overflow"  << endl;
            return;
        }
        top++;//0
        arr[top] = value;//'^'
    }
    
    void pop()
    {
        if(top == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        else
        {
            top--;//It indicates the last element is discarded.And we had now moved to the second last element.
        }
    }
    
    char Peek()
    {
        if(top == -1)
        {
            return '\0';//48;
        }
        return arr[top];//'^'
    }
    
    int precedence(char ch)
    {
        if(ch == '^') return 3;
        if(ch == '*' || ch =='/') return 2;
        if(ch == '+' || ch == '-')return 1;
        //anyother.
        return -1;
    }
    bool empty()
    {
        return top == -1;
    }
    
};
class Solution {
  public:
    string infixToPostfix(string& s) {
        
        stack1 st((int)s.length());
        
        //s = "a*(b+c)/d"
        string ans;
       //Iterate in the original string.
       
       int i = 0;
       while(i < (int)s.length())
       {
            //Case1:s[i] is an Operand -> small alphabets ->capital alphabets
            if( (s[i] >= 'a' && s[i]<='z')|| (s[i] >= 'A' && s[i] <= 'Z') || (s[i]>= '0' && s[i]<='9') )
            {
                //Directly APPEND it into the string ans.
                ans = ans + s[i];
            }
            
            //Case2:Left bracket: '('
            
            //-> simply Pushed it into the "stack"
            
            else if(s[i] == '(')
            {
                st.push(s[i]);
            }
            
            //Case3:Right bracket
            //->Append all the elements from the top of the stack into the ans string and keep popping those elements from the stack also until the top of the stack becomes :'(''
            
            
            else if(s[i] == ')')
            {
                while( st.Peek() != '(' )
                {
                     ans  = ans + st.Peek();
                     st.pop();
                }
                st.pop();//pop : '('
            }
            
            else
            {
                // Any operator other than 1.operand 2. '(' 3.')' comes while traversing in the original string
                
                //Case1. precedence of that operator from original string is higher than the top element of stack.Than push it into the stack
                
                //Precedence order : ^ > *,/ > +,-   '(' , ')' does not participate in the Precedence they are hence given  -1 precedence
                
                if(st.empty())
                {
                    st.push(s[i]);//
                }
                
                else if(st.precedence(s[i]) > st.precedence(st.Peek()))
                {
                    //push this into the stack.
                    st.push(s[i]);
                }
                
                else 
                {
                    while(((st.precedence(st.Peek()) >= st.precedence(s[i])) && st.Peek()!='^') || (st.Peek() =='^' && (st.precedence(st.Peek()) > st.precedence(s[i])) ) )
                    {
                        ans = ans + st.Peek();//added */*  **
                        st.pop();//*/*
                    }
                    
                    st.push(s[i]);//-+  *
                }
                
            }
            
            i++;
       }
       
       
       while(!st.empty())
       {
           ans = ans + st.Peek();
           st.pop();
       }
       
       return ans;
       
    }
};