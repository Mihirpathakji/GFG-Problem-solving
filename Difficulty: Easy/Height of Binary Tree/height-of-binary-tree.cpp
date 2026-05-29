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
  
    int get_my_height(Node* root)
    {
        
        if(!root)
        {
            return -1;
        }
        
        return 1 + max(height(root->left),height(root->right));
    }
    
    int height(Node* root) {
        
        int ans = get_my_height(root);//3
        return ans;
        
    }
};