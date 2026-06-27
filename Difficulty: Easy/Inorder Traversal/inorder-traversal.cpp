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
    vector<int> inOrder(Node* root) {
        
        vector<int>ans;
        
        while(root)
        {
            //Case1 :
            
            if(!(root->left))
            {
                ans.push_back(root->data);
                root = root->right;
            }
            else
            {
                //Check if the Left subtree is traversed or not.
                    
                Node* temp = root->left;
                while(temp->right && temp->right!=root)
                {
                    temp = temp->right;
                }
                
                if(temp->right == NULL)
                {
                    temp->right = root;
                    root = root->left;
                }
                else
                {
                    //loop is already there.Remove the linkage.
                    //temp->right = root.
                    temp->right = NULL;
                    ans.push_back(root->data);
                    root = root->right;
                }
            }
        }
        return ans;
     
     
    }
};