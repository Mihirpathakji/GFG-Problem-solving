class Solution {
  public:
  
    void dfs(int u,unordered_map<int,vector<int>>& adj_list,vector<int>& visited,stack<int>& st) {
        
        visited[u] = 1;
        
        for(auto& v : adj_list[u]) {
            if(visited[v] == 0) {
                dfs(v,adj_list,visited,st);
            }
        }
        
        st.push(u);
        
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        unordered_map<int,vector<int>>adj_list;
        for(int i = 0;i < edges.size();i++) {
        
            int u = edges[i][0];
            int v = edges[i][1];
    
            adj_list[u].push_back(v);//directed.
        }
        
        vector<int>visited(V,0);
        vector<int>ans;
        stack<int>st;
        
        for(int i = 0;i < V;i++) {
            if(visited[i] == 0) {
                dfs(i,adj_list,visited,st);
            }
        }        
            
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
        
    }
};