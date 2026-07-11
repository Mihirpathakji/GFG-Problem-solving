class Solution {
  public:
  
    bool bfs_detectcycle(int start, int parent, unordered_map<int,vector<int>>& adj_list,vector<bool>& visited) {
        
        queue<pair<int,int>>q;//{start node,where it came from}.
        q.push({start,parent});
        visited[start] = true;
        
        while(!q.empty()) {
            
            int node = q.front().first;
            int parent_node = q.front().second;
            q.pop();
            
            for(auto adjacent_node : adj_list[node]) {
                if( visited[adjacent_node] == false) {
                    q.push({adjacent_node,node});
                    visited[adjacent_node] = true;
                }
                else if(visited[adjacent_node] == true && adjacent_node != parent_node) {
                    return true;                    
                }
            }
        }
        
        return false;
        
    }
  
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        vector<bool>visited(V,false);
        
        unordered_map<int,vector<int>>adj_list;
        
        for(auto vec : edges) {
            
            int u = vec[0];
            int v = vec[1];
            
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        
        int parent = -1;//dummy parent for the start.
        //There may be Presense of Unconnected components so we need to do the 
        //BFS for every unvisited vertices.
        
        for(int i = 0;i < V;i++) {
            if(!visited[i]) {
                
                //Every unvisited vertex is liable for a bfs.
                
                if(bfs_detectcycle(i,parent,adj_list,visited)){
                    return true;
                }
            }
        }
        
        return false;

    }
};