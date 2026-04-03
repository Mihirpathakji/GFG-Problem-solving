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
    int height(Node* root) {
        
        //Level order Traversal:
        
        queue<Node*>q;
        
        q.push(root);//100
        
        vector<vector<int>>levels;
        
        while(!q.empty())
        {
            vector<int>ans;
            int size = q.size();//1  2  3  2
            
            for(int i = 0; i < size; i++)
            {//0  1<2
                //q = ""
                root = q.front();//700
                ans.push_back(root->data);//[6 7]
                q.pop();//
                
                if(root->left)
                {
                    q.push(root->left);
                }
                
                if(root->right)
                {
                    q.push(root->right);
                }
                
            }
            
            levels.push_back(ans);//[[1] [2 3] [4 10 5 ] [6 7] ]
        }
        
        return levels.size()-1;
        
    }
};