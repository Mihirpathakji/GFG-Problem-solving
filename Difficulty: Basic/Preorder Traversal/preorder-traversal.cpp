/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    
    Node* recursive_preorder(Node* root,vector<int>&ans)
    {
        if(root == NULL)
        {
            return NULL;
        }
        
        //root.
        ans.push_back(root->data);
        
        recursive_preorder(root->left,ans);//left
        recursive_preorder(root->right,ans);//right
        
    }
    
  
  
    vector<int> preOrder(Node* root) {
        
        vector<int>ans;
        recursive_preorder(root,ans);
        
        return ans;
    }
};