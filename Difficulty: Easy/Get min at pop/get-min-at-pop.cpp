stack<int> _push(int arr[], int n) {
    
    stack<int>st;
    
    //We will push only those values that are Minimum till the current value.
    
    for(int i = 0;i < n;i ++)
    {
        if(i == 0)
        {
            st.push(arr[i]);
        }
        else
        {
            st.push(min(arr[i],st.top()));
        }
    }
    
    return st;

}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s) {
    
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }


}