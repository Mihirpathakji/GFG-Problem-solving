/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    int height_check(Node* root, bool& ans)
    {
        //Recursion .So, Base case :
        if(root == NULL)
        {
            return NULL;
        }
        
        int left_height = height_check(root->left,ans);
        int right_height = height_check(root->right,ans);
        
        
        if(abs(left_height - right_height) > 1)
        {
            ans = false;
        }
        
        return 1 + max(left_height,right_height);
    
    }
  
    bool isBalanced(Node* root) {
        
        bool ans = true;
        height_check(root,ans);
        
        return ans;
    }
};