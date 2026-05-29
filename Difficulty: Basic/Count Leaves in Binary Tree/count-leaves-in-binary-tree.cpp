/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.

    int get_my_ans(Node* root,int& count)
    {
        
        if(!root)
        {
            return 0;//Empty subtree has no leaf nodes.
        }
        
        if(!root->left && !root->right)
        {
            count++;
        }
        
        int leaf_nodes_on_left = get_my_ans(root->left,count);//Count total leaf nodes from the left.
        int leaf_nodes_on_right = get_my_ans(root->right,count);//Count total leaf nodes from the right.    
        
        return count;
    }
    
    
    int countLeaves(Node* root) {
        
        int count = 0;
        get_my_ans(root,count);
        return count;           
    }
    
};