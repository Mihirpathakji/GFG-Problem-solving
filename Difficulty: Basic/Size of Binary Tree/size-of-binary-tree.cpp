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
  

    int getSize(Node* root) {
        
        if(root == NULL)
        {
            return 0;
        }
        
        int nodes_on_left = getSize(root->left);//Count total_number of nodes on the left.
        int nodes_on_right = getSize(root->right);//Count total_number of nodes on right. 
        
        return nodes_on_left + nodes_on_right + 1;
    
    }
};