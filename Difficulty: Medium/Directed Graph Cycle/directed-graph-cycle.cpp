class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        vector<int>ans;
        vector<int>indegree(V,0);
        
        for(int i = 0;i < edges.size();i++) {
            
            int v = edges[i][1];
            
            indegree[v]++;
        }    
    
        
        unordered_map<int,vector<int>>adj_list;
        
        for(auto& edge : edges ) {
            
            int u = edge[0];
            int v = edge[1];
            
            adj_list[u].push_back(v);

        }
        
        queue<int>q;
        for(int i = 0;i < V;i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        
        while(!q.empty()) {
            
            int node = q.front();
            
            q.pop();
            
            if(indegree[node] == 0) {
                ans.push_back(node);
            }
            
            for(auto v :  adj_list[node]  ) {
                
                if(indegree[v] == 0) {
                    q.push(v);
                }
                else {
                    indegree[v]--;
                    if(indegree[v] == 0) {
                        q.push(v);
                    }
                }
            }
        }
        
        return ans.size()!=V;
        
        //TC : O(V + E)
        //SC : O(V)
    


    }
};