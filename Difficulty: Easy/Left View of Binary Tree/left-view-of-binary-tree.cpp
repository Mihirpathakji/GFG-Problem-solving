/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


*/

class Solution {
  public:
  
    vector<int> leftView(Node *root) {
        
        //answer : first node of every level.
        //Level order Traversal:
        
        vector<int>ans;
        if(root == NULL)
        {
            return ans;
        }
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            //Traverse every level and picks up it's first element and insert it into ans.
            
            int n = q.size();
            int original = n;//1 5 4
           
            while(n--)
            {
                Node* temp = q.front();
                q.pop();
                
                if(n == original-1)
                {
                    ans.push_back(temp->data);
                }
                
                if(temp->left)
                {
                    q.push(temp->left);
                }
                
                if(temp->right)
                {
                    q.push(temp->right);
                }
                
            }
            
        }
        
        return ans;
        
    }
};