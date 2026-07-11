class Solution {
  public:
  
    bool detect_cycle(int node,int parent_node,unordered_map<int,vector<int>>& adj_list,vector<bool>& visited) {
        
        visited[node] = true;
        
        for(auto v : adj_list[node]) {
            
            //If v is parent of node.Than no need to detect cycle.
            if(v == parent_node) {
                continue;
            }
            
            //If it is already visited.->Cycle detected.
            else if(visited[v] == true) {
                return true;
            }
            else {
                if(detect_cycle(v,node,adj_list,visited)) {
                    return true;
                }
            }
        }
        
        return false;
    }
    
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        unordered_map<int,vector<int>>adj_list;
        
        for(auto vec : edges) {
            
            int u = vec[0];
            int v = vec[1];
            
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        
        int parent_node = -1;
        vector<bool>visited(V,false);
        
        for(int i = 0;i < V;i++) {
            
            if(!visited[i]){
                if(detect_cycle(i,i-1,adj_list,visited)) {
                    return true;
                }
            }
            
        }
        
        return false;
        
    }
};