// User function Template for C++

class Solution {
  public:
    vector<int> largestValues(Node* root) {
        
        queue<Node*> q;
        q.push(root);
        
        vector<int>ans;
        
        while(!q.empty())
        {
            
            int n = q.size();//1 2 
            int maxi = INT_MIN;//INT_MIN.
            while(n--)
            {
                Node* temp = q.front();// 2  3
                q.pop();// 3 
                maxi = max(maxi,temp->data);//1 2 3
        
                if(temp->left)
                {
                    q.push(temp->left);
                }
                
                if(temp->right)
                {
                    q.push(temp->right);
                }
                
            }
            
            ans.push_back(maxi);//[1 3]
        }
        
        return ans;
    
    }
};