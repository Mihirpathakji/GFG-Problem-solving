/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    
    int get_my_count(Node* root,int& count)
    {
        
        if(root == NULL)
        {
            //Empty Tree has 0 non-leaf nodes.
            return 0;
        }
        
        if(root->left || root->right)
        {
            count++;
        }
        
        int non_leaf_nodes_on_left_subtree = get_my_count(root->left,count);
        int non_leaf_nodes_on_right_subtree = get_my_count(root->right,count);
        
        return count;
        
    }
  
    int countNonLeafNodes(Node* root) {
    
        int count = 0;
        get_my_count(root,count);
        return count;
    }
};