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
    
    int get_my_ans(Node* root)
    {
        
        if(root == NULL)
        {
            return 0;
        }
        
        int left_sum = get_my_ans(root->left);//Obtain the sum from the left subtree.
        int right_sum = get_my_ans(root->right);//Obtain the sum from the right subtree.
        
        return left_sum + right_sum + root->data;
    }
  
  
    int sumBT(Node* root) {
        
        int sum = 0;
        sum = get_my_ans(root);
        
        return sum;
    }
};