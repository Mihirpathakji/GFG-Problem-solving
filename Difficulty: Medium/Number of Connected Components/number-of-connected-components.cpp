class Solution {
  public:
    
    void dfs(int u,vector<bool>& visited,vector<vector<int>>& adj_matrix) {
        
        visited[u] = true;
            
        for(auto it : adj_matrix[u]) {
            
            if(visited[it] == false) {
                dfs(it,visited,adj_matrix);
            }
    
        }

    }
  
    int countConnected(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>>adj_matrix(V);

        for(int i = 0; i < edges.size();  i++) {
            
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj_matrix[u].push_back(v);
            adj_matrix[v].push_back(u);
            
        }
        
        int dfscount = 0;
        vector<bool>visited(V,false);
        
        for(int i = 0;i < V; i++) {
            if(visited[i] == false) {
                dfscount++;
                dfs(i,visited,adj_matrix);
            }
        }
        
        return dfscount;
        
        //TC : O(V + 2*E)
        //SC : O(v*v)
       
    }
};