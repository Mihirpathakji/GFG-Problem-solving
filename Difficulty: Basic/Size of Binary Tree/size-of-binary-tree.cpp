/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  
    int get_my_ans(Node* root)
    {
        
        if(root == NULL)
        {
            return 0;
        }
        
        int nodes_on_left = get_my_ans(root->left);
        int nodes_on_right = get_my_ans(root->right); 
        
        return nodes_on_left + nodes_on_right + 1;

    }

    int getSize(Node* root) {
        
        int size = 0;
        size = get_my_ans(root);
        return size;
    
    }
};