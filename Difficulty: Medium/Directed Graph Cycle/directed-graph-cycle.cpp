class Solution {
  
  public:
  
    bool dfs(int start,unordered_map<int,vector<int>>&mp,vector<int>&visited,vector<int>&Same_Path_visited) {
        
        visited[start] = 1;
        Same_Path_visited[start] = 1;
        
        for(int v : mp[start]) {
            if(visited[v] == 0) {
                 if(dfs(v,mp,visited,Same_Path_visited) == true) {
                     return true;
                 }
            }    
            else {
                if(Same_Path_visited[v] == 1) {
                    return true;
                }
            }
        }
        
        Same_Path_visited[start] = 0;
        return false;
        
    }
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        
        //Directed graph adj_list.
        unordered_map<int , vector<int>>mp;
        
        for(int i = 0;i < edges.size();i++) {
            
            int u = edges[i][0];
            int v = edges[i][1];
                
            mp[u].push_back(v);
        }
        
        vector<int>visited(V,0);
        vector<int>Same_Path_visited(V,0);
        
        for(int i = 0;i < V;i++) {
            if(!visited[i]) {
                if(dfs(i,mp,visited,Same_Path_visited) == true) {
                    return true;
                }
            }
        }
        
        return false;
        
        //
      
    }
};