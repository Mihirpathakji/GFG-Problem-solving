class maxHeap {

  public:

    int arr[1000];
    int total_size = 1000;
    int curr_size = 0;
    //This are the Members of the class  we need object inorder to access them.

    maxHeap H1();
  
    void push(int x) {
        
        arr[curr_size] = x;//arr[7] = x.
        int parent_index = (curr_size-1)/2;
        
        int child_index = curr_size;//7.
        
        while(arr[child_index] > arr[parent_index]) {
            
            swap(arr[child_index],arr[parent_index]);
            child_index = parent_index;//3.1.
            parent_index = (child_index-1)/2;//1//0.
        }
        
        curr_size++;
        
    }
    
    void Heapify(int Parent_index) {
        
        int left_child  = 2*Parent_index + 1;
        int right_child = 2*Parent_index + 2;
        
        int largest = Parent_index;
        
        if(left_child < curr_size && arr[left_child] > arr[largest]) {
            largest = left_child;
        }
        
        if(right_child < curr_size && arr[right_child] > arr[largest]) {
            largest = right_child;
        }
        
        if(largest!=Parent_index) {
            swap(arr[largest],arr[Parent_index]);
            Heapify(largest);
        }
        
    }

    void pop() {
        
        //Popping always occurs from the top node of the heap.
        arr[0] = arr[curr_size-1];
        curr_size--;
        
        Heapify(0);

    }

    int peek() {
        
        if(curr_size == 0) {
            return -1;
        }
        
        return arr[0];
        
    }

    int size() {
        
        return curr_size;
        
    }
};