class Solution {
  public:
    
    vector<int> bfs(vector<vector<int>> &adj) {
        
        int n = adj.size();
        vector<bool>visited(n,false);
        
        vector<int>ans;
        
        queue<int>q;
        
        q.push(0);
        visited[0] = true;
        
        while(!q.empty()) {
            
            int temp = q.front();//0
            q.pop();
            
            ans.push_back(temp);
            
            for(int &it : adj[temp]) {
                
                if(!visited[it]) {
                    q.push(it);
                    visited[it] = true;
                }
            }
        }
        
        return ans;
        
        
      
    }
};