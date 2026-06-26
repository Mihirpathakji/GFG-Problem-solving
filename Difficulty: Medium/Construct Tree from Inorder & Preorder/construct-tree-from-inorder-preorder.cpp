/* Structure of a Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    
    int find(vector<int> &inorder,int instart,int inend,int target)
    {
        for(int i = instart;i <= inend; i++)
        {
            if(inorder[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
        
    Node* Tree(vector<int> &inorder,vector<int> &preorder,int instart,int inend,int preindex)
    {
        
        if(instart > inend)
        {
            return NULL;
        }
         
        Node* root = new Node(preorder[preindex]);
        
        int pos = find(inorder,instart,inend,preorder[preindex]);
    
        root->left = Tree(inorder,preorder,instart,pos-1,preindex+1);
        root->right = Tree(inorder,preorder,pos+1,inend,preindex+pos-instart+1);
        
        return root;
        
    }
  
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
            
     return Tree(inorder,preorder,0,inorder.size()-1,0);
     //preindex : Index of the preorder array.

    }
};