/* Node structure
struct Node
{
    int data;
    Node* left, *right;
}; */

/* Given two trees, should return true if they are
   mirror of each other. */
class Solution {
  public:
    bool areMirror(Node* root1, Node* root2) {
     
        if(!root1 && !root2)
        {
            return true;
        }

        else if(root1 && !root2)
        {   
            return false;
        }
        else if(!root1 && root2)
        {
            return false;
        }
        else
        {
            if(root1->data == root2->data)
            {
                bool left_check = areMirror(root1->left,root2->right);
                bool right_check = areMirror(root1->right,root2->left);
                return left_check && right_check; 
            }
        }

        return false;
        
    }
};