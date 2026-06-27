class Solution {
  public:
    void flatten(Node *root) {
            
        while(root)
        {
            if(root->left)
            {
                Node* temp = root->left;
                while(temp->right)
                {
                    temp = temp->right;
                }
                temp->right = root->right;
                root->right = root->left;
                root->left = NULL;
                root = root->right;
            }
            else
            {
                root = root->right;
            }
        }
        
        //TC :O(n)
        //SC :O(1)
    }
};