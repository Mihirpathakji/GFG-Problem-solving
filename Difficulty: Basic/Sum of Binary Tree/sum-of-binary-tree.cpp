/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int sumBT(Node* root) {
        
        int sum = 0;
        queue<Node*>q;
        
        if(root == NULL)
        {
            return 0;
        }
        
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0; i < size ; i++)
            {
                root = q.front();
                sum += (root->data);
                
                q.pop();
                
                if(root->left)
                {
                    q.push(root->left);
                }
                if(root->right)
                {
                    q.push(root->right);
                }
            }
        }
        
        return sum;
    
    }
    
};