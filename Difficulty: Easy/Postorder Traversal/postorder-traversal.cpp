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
  
    Node* recursive_postOrder(Node* root,vector<int>&ans)
    {
        if(root == NULL)
        {
            return NULL;
        }
        
        //left,right,root-> is posted.
        
        recursive_postOrder(root->left,ans);
        recursive_postOrder(root->right,ans);
        
        ans.push_back(root->data);
            
        return root;
        
    }
    
    
    vector<int> postOrder(Node* root) {
        
        vector<int>ans;
        recursive_postOrder(root,ans);    
        return ans;

    }
};