/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
  
    Node* insert(Node* root, int key) {
        
        
        if(root == nullptr)
        {
            root = new Node(key);
            return root;
        }
        
        
        if(root->data > key)
        {
            root->left =  insert(root->left,key);
        }
        
        else if(root->data < key)
        {
                root->right = insert(root->right,key);
        }
        
        
        return root;
        
        
    }
};