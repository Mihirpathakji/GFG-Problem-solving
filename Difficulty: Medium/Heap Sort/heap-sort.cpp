// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
  
    void Heapify(int Parent_index,vector<int>& arr,int& curr_size) {
        
        if(Parent_index < 0) {
            return;
        }
        
        int left_child = 2*Parent_index + 1;
        int right_child = 2*Parent_index + 2;
        
        int largest = Parent_index;
        
        if(left_child < curr_size && arr[largest] < arr[left_child] ) {
            largest = left_child;
        }
        
        if(right_child < curr_size && arr[largest] < arr[right_child]) {
            largest = right_child;
        }
        
        if(largest != Parent_index) {
            swap(arr[largest],arr[Parent_index]);
            Heapify(largest,arr,curr_size);
        }
     
    }
    
    void heapSort(vector<int>& arr) {
       
        int n = arr.size();
        int curr_size = n;  
        
        //1.Builded a Max Heap.     
        
        for(int i = (curr_size/2) - 1;i >= 0; i--) {
            Heapify(i,arr,curr_size);
        }
        
        //2.Apply Deletion : Keep on deleting node until heap size
        
        while(curr_size >= 2) {
            
            swap(arr[0],arr[curr_size-1]);
            curr_size--;//
            
            Heapify(0,arr,curr_size);
            //Since, We never touched the left subtree and the right
            //subtree of the root.Hence their left and right 
            //subtree are whole VALID MAXHEAPS already.So, No need to 
            //Do Heapify for the left subtree and right subtree of the 
            //root.We need to Heapify only for the root element at the index
            // == 0.Since the Root element is the Only one that 
            //we replaced with Last node.So,their only the Heap 
            //property would Might have broken.
        }
       
    }
    
    //TC  O(n*logn)
    //SC : O(1)
    
        
};