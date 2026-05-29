/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    
    Node* recursive_inorder(Node* root,vector<int>&ans)
    {
        if(!root)
        {
            return NULL;
        }
        
        //left,root,right.
        
        recursive_inorder(root->left,ans);
        ans.push_back(root->data);
        recursive_inorder(root->right,ans);
            
        return root;    

    }
  
    vector<int> inOrder(Node* root) {
        
        
        vector<int>ans;
        recursive_inorder(root,ans);
        return ans;
        
    }
};