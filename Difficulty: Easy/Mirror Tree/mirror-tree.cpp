/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void mirror(Node* root) {
        
        //DFS : 
        
        //1.Base case : 
        
        if(root == NULL)
        {
            return;
        }
        
        //Swapp left and right nodes using third temporary pointer.
        
        Node* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        mirror(root->left);
        mirror(root->right);
        
    }
};