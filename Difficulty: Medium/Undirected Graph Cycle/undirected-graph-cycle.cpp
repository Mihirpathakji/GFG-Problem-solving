class Solution {
  public:

    bool bfs_cycledetect(int u,int parent_node,unordered_map<int,vector<int>>& adj_list,vector<bool>&visited) {
        
        queue<pair<int,int>>q;//{start_node,parent_of_it}.
        q.push({u,parent_node});
        visited[u] = true;//visited the starting point.
    
        while(!q.empty()) {
            
            int node = q.front().first;//0 1 2 3
            int parent_node1 = q.front().second;//-1 0 1 2
            q.pop();
            
            for(auto adj_node : adj_list[node]) {
                
                if(visited[adj_node] == true && adj_node != parent_node1) {
                    //it was already visited was not a parent node i.e visited form any other side i.e cycle detected.
                    return true;
                }
                else if(visited[adj_node] == false) {
                    q.push({adj_node,node});
                    visited[adj_node] = true;
                }
            }
            
        }
        
        return false;
        
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        //Using BFS.If a node gets visited more than once and it is not the parent node.Than there is a cycle present.
        
        
        //Since there can be multiple disconnected components,We will perform BFS for every unvisited node.
        
        vector<bool>visited(V,false);
        int parent_node = -1;
        unordered_map<int,vector<int>>adj_list;
        
        for(auto vec : edges) {
            int u = vec[0];
            int v = vec[1];
            
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        
        for(int i = 0;i < V;i++) {
            //Every unvisited vertice is liable to be checked through BFS.
            if(!visited[i]) {
                if(bfs_cycledetect(i,parent_node,adj_list,visited)) {
                    return true;
                }
            }
        }        
        
        return false;
        
        //TC : O(V + 2 *E)
        //SC : O(V)
    
    }
};