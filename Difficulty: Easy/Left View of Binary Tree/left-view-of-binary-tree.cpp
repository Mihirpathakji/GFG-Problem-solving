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
 
   void left_view(Node *root,int level,vector<int>& ans)
   {
        if(root == NULL)
        {
            return;
        }
        
        if(level == ans.size())
        {
            ans.push_back(root->data);
        }
        
        left_view(root->left,level+1,ans);//Left_subtree
        left_view(root->right,level+1,ans);//Right_subtree
       
   }
  
    vector<int> leftView(Node *root) {
        
        //Do with DFS : we need to track the level everytime at every recursive call.
        int level = 0;
        vector<int>ans;
        left_view(root,level,ans);
        
        return ans;
    }
    
};